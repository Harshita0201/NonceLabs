//Ques 1: It is Spring time! Leaves and petals are falling all over the place
//Suppose that the falling speed of a petal is 5 centimetres per second (5 cm/s), and it takes 80 seconds for the petal to reach the ground from a certain branch.
//Write a function that receives the speed (in cm/s) of a petal as input, and returns the time it takes for that petal to reach the ground from the same branch.
//Notes:
//The movement of the petal is quite complicated, so in this case we can see the velocity as a constant during its falling.
//Pay attention to the data types.
//If the initial velocity is non-positive, the return value should be 0

CalculateTime(double speed) {  
      if(speed > 0){         
          return 400 / speed; 
      }else return 0;
}
