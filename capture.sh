sleep 30s

while true
do
	timestamp=`date +"%Y%m%d-%H%M%S"`
	raspistill -o /home/pi/lesbiancryptid/image-"$timestamp".jpg
	sleep 30s
done
