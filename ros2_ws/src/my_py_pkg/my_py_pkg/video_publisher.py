import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
import cv2

class VideoPublisher(Node):
    def __init__(self):
        super().__init__("video_publisher")
        self.publisher_ = self.create_publisher(Image, "video_stream", 10)
        
        # open the webcam
        self.capture = cv2.VideoCapture(0)
        
        self.timer_ = self.create_timer(1.0/30, self.publish_frame) #30fps

    def publish_frame(self):
        # capture videoframe with opencv
        ret, frame = self.capture.read()
        if not ret:
            return
        
        # create ros2 image message
        msg = Image()
        msg.height = frame.shape[0]
        msg.width = frame.shape[1]
        msg.encoding = "bgr8"
        msg.data = frame.tobytes()

        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = VideoPublisher()
    rclpy.spin(node)
    node.capture.release()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
