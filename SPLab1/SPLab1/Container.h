#include <unordered_map>
#include <stdexcept>

using namespace std;

#pragma once
template <class Key, class Value>
class Container
{

private:
	unordered_map<Key, Value> _values;
public:
	void Add(Key key, Value value);
	Value Get(Key key);
};

template<class Key, class Value>
inline void Container<Key, Value>::Add(Key key, Value value)
{
	_values[key] = value;
}

template<class Key, class Value>
inline Value Container<Key, Value>::Get(Key key)
{
	return _values.count(key) != 0 ? _values[key] : throw new runtime_error("") ;
}
