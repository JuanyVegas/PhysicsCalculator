#pragma once
template <typename T>
T get_validated_input()
{
     try
     {
          T result;
          std::cin >> result;
          return result;
     }
     catch (const std::ios_base::failure& e)
     {
          throw std::ios_base::failure("INVALID INPUT");
     }
}
