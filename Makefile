test_compression: 
	cd config/; gcc  mainCompression.c assert_with_message.c ../compression.c -o ../result
	./result
