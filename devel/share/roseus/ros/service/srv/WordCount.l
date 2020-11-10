;; Auto-generated. Do not edit!


(when (boundp 'service::WordCount)
  (if (not (find-package "SERVICE"))
    (make-package "SERVICE"))
  (shadow 'WordCount (find-package "SERVICE")))
(unless (find-package "SERVICE::WORDCOUNT")
  (make-package "SERVICE::WORDCOUNT"))
(unless (find-package "SERVICE::WORDCOUNTREQUEST")
  (make-package "SERVICE::WORDCOUNTREQUEST"))
(unless (find-package "SERVICE::WORDCOUNTRESPONSE")
  (make-package "SERVICE::WORDCOUNTRESPONSE"))

(in-package "ROS")





(defclass service::WordCountRequest
  :super ros::object
  :slots (_words ))

(defmethod service::WordCountRequest
  (:init
   (&key
    ((:words __words) "")
    )
   (send-super :init)
   (setq _words (string __words))
   self)
  (:words
   (&optional __words)
   (if __words (setq _words __words)) _words)
  (:serialization-length
   ()
   (+
    ;; string _words
    4 (length _words)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _words
       (write-long (length _words) s) (princ _words s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _words
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _words (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass service::WordCountResponse
  :super ros::object
  :slots (_count ))

(defmethod service::WordCountResponse
  (:init
   (&key
    ((:count __count) 0)
    )
   (send-super :init)
   (setq _count (round __count))
   self)
  (:count
   (&optional __count)
   (if __count (setq _count __count)) _count)
  (:serialization-length
   ()
   (+
    ;; uint32 _count
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint32 _count
       (write-long _count s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint32 _count
     (setq _count (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass service::WordCount
  :super ros::object
  :slots ())

(setf (get service::WordCount :md5sum-) "58903d21a3264f3408d79ba79e9f7c7e")
(setf (get service::WordCount :datatype-) "service/WordCount")
(setf (get service::WordCount :request) service::WordCountRequest)
(setf (get service::WordCount :response) service::WordCountResponse)

(defmethod service::WordCountRequest
  (:response () (instance service::WordCountResponse :init)))

(setf (get service::WordCountRequest :md5sum-) "58903d21a3264f3408d79ba79e9f7c7e")
(setf (get service::WordCountRequest :datatype-) "service/WordCountRequest")
(setf (get service::WordCountRequest :definition-)
      "string words
---
uint32 count
")

(setf (get service::WordCountResponse :md5sum-) "58903d21a3264f3408d79ba79e9f7c7e")
(setf (get service::WordCountResponse :datatype-) "service/WordCountResponse")
(setf (get service::WordCountResponse :definition-)
      "string words
---
uint32 count
")



(provide :service/WordCount "58903d21a3264f3408d79ba79e9f7c7e")


