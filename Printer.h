#pragma once

#include <iostream>

namespace soundProcessor {

class Printer {
 public:
  void printWaveHead(std::ostream &outStream, int dataSize);

  void printNBytesFromIntoOut(std::istream &inputStream, std::ostream &outStream, int N);

  void printNSamples(std::ostream &outputStream, const std::vector<short int> &sampleBuff, int N);

  void printNByteInt(std::ostream &output, unsigned long long num, int N);

  void printChunckId(std::ostream &output, const std::string &chunckId);

  void printNCharacters(std::ostream &outStream, int N, char character);
};

}