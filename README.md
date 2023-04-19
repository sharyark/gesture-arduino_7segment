<h2>Overview</h2>
<p>This project uses a webcam and Mediapipe library to recognize hand gestures and displays the number on a 7-segment display. It includes a Python script, gesture.py, which captures the video from the webcam, processes it using Mediapipe library to recognize the hand gesture and displays the number on a 7-segment display using an Arduino board connected to the computer via USB.</p>
<h2>Files</h2>
<ul>
  <li><code>gesture.py</code>: This is the main Python script file. It includes functions for capturing video from the webcam, processing the video frames using Mediapipe, recognizing the hand gesture and displaying the number on the 7-segment display using the pyserial library to communicate with the Arduino board.</li>
  <li><code>SevenSegment.ino</code>: This is the Arduino sketch file. It includes functions for receiving the number from the Python script over the serial connection and displaying the number on the 7-segment display connected to the Arduino board pins.</li>
</ul>
<h2>Dependencies</h2>
<ul>
  <li><code>cv2</code>: OpenCV library for capturing video from the webcam.</li>
  <li><code>mediapipe</code>: Mediapipe library for hand gesture recognition.</li>
  <li><code>pyserial</code>: Python library for communicating with the Arduino board over the serial connection.</li>
</ul>
<h2>Usage</h2>
<p>To use the gesture project, you will need to connect the 7-segment display to your Arduino board using the appropriate pins. You can refer to the SevenSegment.ino sketch file for the pin connections used in this project.</p>
<p>Once the connections are made, you can upload the SevenSegment.ino sketch to your Arduino board and run it.</p>
<p>Next, you can run the gesture.py script on your computer. The script will capture video from the webcam and process it using Mediapipe library to recognize the hand gesture. If the hand gesture is recognized, the script will send the corresponding number to the Arduino board over the serial connection, which will then display the number on the 7-segment display.</p>
<h2>Limitations</h2>
<ul>
  <li>The project may not recognize hand gestures accurately in all lighting conditions or hand positions.</li>
  <li>The project only recognizes a limited set of hand gestures. It could be extended to recognize additional gestures if desired.</li>
  <li>The project assumes that the 7-segment display is connected to the Arduino board pins. Other types of displays may require different pin connections or code modifications.</li>
</ul>
<br>
<br>
<h3>for video demo</h3>
https://web.facebook.com/sharyar.shary.5243/videos/491818605786259/
