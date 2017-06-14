float previousError = 0.0, currentPosition;
float angleError = 0.0, currentError;
int dt =1;

void solution (){
  currentError = desiredX-ballX;
  float Kp = 0.0004, Kd = 0.009;
  float angle = Kp*currentError;
  float speed = currentError - previousError;
  angle += Kd*speed;
  gotoAngle (angle);
  previousError = currentError;
  }