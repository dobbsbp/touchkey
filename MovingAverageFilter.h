/*
Original code located at:
https://github.com/sebnil/Moving-Avarage-Filter--Arduino-Library-

Place this file into your arduino ./libraries/MovingAverageFilter/
*/
#ifndef MovingAverageFilter_h
#define MovingAverageFilter_h

#define MAX_DATA_POINTS 20

class MovingAverageFilter {
public:
  //construct without coefs
  MovingAverageFilter(unsigned int newDataPointsCount);

  float process(float in);

private:
  float values[MAX_DATA_POINTS];
  int k; // k stores the index of the current array read to create a circular memory through the array
  int dataPointsCount;
  float out;
  int i; // just a loop counter
};
#endif

