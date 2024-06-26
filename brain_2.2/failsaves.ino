
// runs when signal is lost
void failsafe(){
  servo_1.write(servo_1_failsave_position);
  servo_2.write(servo_2_failsave_position);
  drive_motor_A(COAST, 0);
  drive_motor_B(COAST, 0);
  drive_motor_C(COAST, 0);
  drive_motor_D(COAST, 0); 
  if(wireles_mode == 0){
    led_state = RX_LOST;
  }
  servo_1_was_0_before_arming = false;
  servo_2_was_0_before_arming = false;
}