#pragma once

inline static auto toto = int{42};

template<auto separator = ' ',
         typename T1, typename... Types>
void print(const T1& arg1, const Types&... args)
{
  auto seprarator_functor = [](const auto& element) {
      std::cout << separator << element;
  };

  std::cout << arg1;
  (... , seprarator_functor(args));
}
