//  including ezbutton module (easy button module)
#include<ezButton.h>

//  connect both buttons to pin 4 and 22
const int button1 = 4;
const int button2 = 22;

//  defining a variable to track count of button press
int count = 0;

//  creating button objects
ezButton push_button1(button1);
ezButton push_button2(button2);

void setup()
{
  //  change the baud rate to 9600 if required
  Serial.begin(9600);
  push_button1.setDebounceTime(50);
  push_button2.setDebounceTime(50);
  

}

void loop()
{
  //  loop both the push_buttons : continuous polling
  push_button1.loop();
  push_button2.loop();
  


  //  check if push_button1 is pressed : store the button push count into count variable
  if (push_button1.isPressed())
  {
    count=count+1
    Serial.print("Number is ");
    Serial.println(count);

    
  }


}
