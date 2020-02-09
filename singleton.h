class singleton
{
private:
  static singleton* singletonInst;

  singleton() {};
  singleton(const singleton&) = default;
  singleton& operator=(const singleton&) = default;
public:
  static singleton* getInstance();
  ~singleton();
};