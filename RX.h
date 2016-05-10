#ifndef RX_H_
#define RX_H_

void configureReceiver();
void computeRC();
uint16_t readRawRC(uint8_t chan);
void readSerial_RX(void);
#if defined(OPENLRSv2MULTI)
  void initOpenLRS(void);
  void Read_OpenLRS_RC(void);
#endif
#if defined(SPEK_BIND)  // Bind Support
  void spekBind(void);
#endif

void read_command();
void auto_control(String command);
void power();
void inc_throttle();
void dec_throttle();
void mid_throttle();
void rotate_left();
void rotate_right();
void no_yaw();
void forward();
void backward();
void no_pitch();
void turn_left();
void turn_right();
void no_roll();

void avoid();

#endif /* RX_H_ */
