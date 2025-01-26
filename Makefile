test_compression: 
	cd config/; gcc  compression.c assert_with_message.c ../compression.c -o ../result
	./result
