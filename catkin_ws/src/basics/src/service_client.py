#!/home/jihoon/.pyenv/versions/ros_tutorial/bin/python

import rospy
from basics.srv import WordCount
import sys

rospy.init_node('service_client')
rospy.wait_for_service('word_count')
word_counter = rospy.ServiceProxy('word_count', WordCount)

words = ' '.join(sys.argv[1: ])
word_count = word_counter(words)
print(words)
print(words, '->', word_count.count)
