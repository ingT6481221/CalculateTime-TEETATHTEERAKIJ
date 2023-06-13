void getTime(int &h, int &m) { cin >> h >> m; }

int subtract(int &h1, int &m1, int &h2, int &m2) {
  int hr = h2 - h1;
  int min = m2 - m1;
  if (min < 0) {
    hr -= 1;
  }
  if (hr < 0) {
    hr += 24;
  }
  return hr;
}

int subtract(int &m1, int &m2) {
  int min = m2 - m1;
  if (min < 0) {
    min += 60;
  }
  return min;
}