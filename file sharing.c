#include <stdio.h>
int main() {
FILE *fp;
int reading, i;
fp = fopen("sensor_log.txt", "w"); 
if(fp == NULL) {
printf("Error opening file!");
return 0;
}
printf("Enter 3 sensor readings:\n");
for(i = 0; i < 3; i++) {
printf("Reading %d: ", i+1);
scanf("%d", &reading);
fprintf(fp, "Sensor %d Reading: %d\n", i+1, reading);
}
fclose(fp);
printf("\nData saved to sensor_log.txt successfully!");
return 0;
}
