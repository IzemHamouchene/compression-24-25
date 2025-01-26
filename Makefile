test_grayScaleImage: 
	cd config/; gcc  mainGrayScaleImage.c assert_with_message.c ../GrayScaleImage.c -o ../result
	./result

test_ColoredBitmap: 
	cd config/; gcc  mainColoredBitmap.c assert_with_message.c ../ColoredBitmap.c -o ../result
	./result

test_video: 
	cd config/; gcc  mainvideo.c assert_with_message.c ../video.c -o ../result
	./result