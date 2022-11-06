//
// Created by Gaelan McMillan on 2022-11-06.
//
#pragma once
#include "macos_includes.h"

template <class T> std::ostream& operator<<(std::ostream& os, const std::vector<T>& v);
template <class T> std::ostream& operator<<(std::ostream& os, std::stack<T> s);
template <class T> std::ostream& operator<<(std::ostream& os, std::queue<T> q);
template <class T, size_t N> std::ostream& operator<<(std::ostream& os, const std::array<T, N>& a);
template <class T> std::ostream& operator<<(std::ostream& os, const std::set<T>& s);
template <class T> std::ostream& operator<<(std::ostream& os, const std::unordered_set<T>& s);
template <class K, class V> std::ostream& operator<<(std::ostream& os, const std::map<K,V>& m);
template <class K, class V> std::ostream& operator<<(std::ostream& os, const std::unordered_map<K,V>& m);
template <class F, class S> std::ostream& operator<<(std::ostream& os, const std::pair<F,S>& p);

template<class II>
std::ostream& operator<<(std::ostream& os, std::pair<II,II> iterPair) {
  os << "[";
  for (auto it = iterPair.first; it != iterPair.second; it = next(it)) {
    os << *it << (next(it) == iterPair.second ? "" : ", ");
  }
  os << "]";
  return os;
}
template <class T> std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
  os << make_pair(v.begin(), v.end());
  return os;
}
template <class T> std::ostream& operator<<(std::ostream& os, std::stack<T> s) {
  os << "(top) ";
  while (!s.empty()) { os << s.top() << " | "; s.pop(); }
  os << "(bot)";
  return os;
}
template <class T> std::ostream& operator<<(std::ostream& os, std::queue<T> q) {
  os << "(front) ";
  while (!q.empty()) { os << q.front() << " | "; q.pop(); }
  os << "(back)";
  return os;
}
template <class T, size_t N> std::ostream& operator<<(std::ostream& os, const std::array<T, N>& a) {
  os << make_pair(a.begin(), a.end());
  return os;
}
template <class T> std::ostream& operator<<(std::ostream& os, const std::set<T>& s) {
  os << make_pair(s.begin(), s.end());
  return os;
}
template <class T> std::ostream& operator<<(std::ostream& os, const std::unordered_set<T>& s) {
  os << make_pair(s.begin(), s.end());
  return os;
}
template <class K, class V> std::ostream& operator<<(std::ostream& os, const std::map<K,V>& m) {
  os << make_pair(m.begin(), m.end());
  return os;
}
template <class K, class V> std::ostream& operator<<(std::ostream& os, const std::unordered_map<K,V>& m)  {
  os << make_pair(m.begin(), m.end());
  return os;
}
template <class F, class S> std::ostream& operator<<(std::ostream& os, const std::pair<F,S>& p) {
  os << "{" << p.first << ", " << p.second << "}";
  return os;
}

#define dbg(x) cout << "\033[34;1m" << #x << "\033[0m" << ": " << (x) << '\n'
