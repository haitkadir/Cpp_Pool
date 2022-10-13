#include <iostream>




class Log{
private:
  int m_ErrorState = 3;
public:
  enum LOG_STATES{
    ERROR,
    WARNING,
    INFO,
  };
  void SetLevel(int Level){
    m_ErrorState = Level;
  }
  void Error(const char *Message){
    if (m_ErrorState >= ERROR)
        std::cout << "[ERROR]" << Message << std::endl;
  }
    void Warning(const char *Message){
    if (m_ErrorState >= WARNING)
        std::cout << "[WARNING]" << Message << std::endl;
  }
  void Info(const char *Message){
    if (m_ErrorState >= INFO)
        std::cout << "[INFO]" << Message << std::endl;
  }
};



int main(){
  Log log;

  log.SetLevel(Log::WARNING);
  log.Error("This is an error message");
  log.Warning("This is a warning message");
  log.Info("This is an info message");
}

