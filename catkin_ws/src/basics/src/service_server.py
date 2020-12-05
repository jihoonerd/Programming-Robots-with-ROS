#!/home/jihoon/.pyenv/versions/ros_tutorial/bin/python

import rospy

from basics.srv import WordCount, WordCountResponse

def count_words(request):
    return {'count': len(request.words.split())}

rospy.init_node('service_server')
service = rospy.Service('word_count', WordCount, count_words)
rospy.spin()