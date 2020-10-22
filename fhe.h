#include <utility>

using std::pair;

//Bitstring type, used to encode items
using bitstr_t = long unsigned int;

//Abstract parameter type
class Parms_wrapper{

};
using parms_t = Parms_wrapper;

//Abstract plaintext type
class Pt_wrapper{
public:

  Pt_wrapper(const parms_t & p, const bitstr_t val = 0) {}
  
  void set_to_random_nonzero(){
    return;
  }

  bool is_zero() const {
    return false;
  }
};
using ptext_t = Pt_wrapper;

//Abstract ciphertext type
class Ct_wrapper{
public:

  Ct_wrapper(const parms_t & p) {}

  //Arithmetic operators available
  //Ciphertext-ciphertext operations
  Ct_wrapper & operator+(const Ct_wrapper & other) const {
    return other;
  }
  Ct_wrapper & operator*(const Ct_wrapper & other) const {
    return other;
  }
  Ct_wrapper & operator*=(const Ct_wrapper & other){
    return other;
  }
  Ct_wrapper & operator+=(const Ct_wrapper & other){
    return other;
  }
  Ct_wrapper & operator-(const Ct_wrapper & other) const {
    return other;
  }
  Ct_wrapper & operator-=(const Ct_wrapper & other){
    return other;
  }
  //Ciphertext-plaintext operations
  Ct_wrapper & operator+(const ptext_t & other) const {
    return *this;
  }
  Ct_wrapper & operator*(const ptext_t & other) const {
    return *this;
  }
  Ct_wrapper & operator*=(const ptext_t & other){
    return *this;
  }
  Ct_wrapper & operator+=(const ptext_t & other){
    return *this;
  }
  Ct_wrapper & operator-(const ptext_t & other) const {
    return *this;
  }
  Ct_wrapper & operator-=(const ptext_t & other){
    return *this;
  }
  
  Ct_wrapper & operator=(const Ct_wrapper & other){
    return *this = other;
  }
};
using ctext_t = Ct_wrapper;

//Key types
class Key_wrapper{

}
using pk_t = Key_wrapper;
using sk_t = Key_wrapper;

//Non-class FHE functions
parms_t Setup(const unsigned int lambda){
  parms_t p;
  return p;
}

std::pair<sk_t, pk_t> KeyGen(const parms_t & p){
  std::pair<sk_t, pk_t> keypair;
  return keypair;
}

ctext_t Encrypt(const ptext_t & m, const pk_t & pk){
  ctext_t c;
  return c;
}

ptext_t Decrypt(const ctext_t & c, const sk_t & sk){
  ptext_t m;
  return m;
}
