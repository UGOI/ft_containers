template <class T1, class T2>
struct ft_pair {
    typedef T1 first_type;
    typedef T2 second_type;

    first_type first;
    second_type second;

    ft_pair() : first(), second() {}

    ft_pair(const first_type& a, const second_type& b) : first(a), second(b) {}

    template <class U1, class U2>
    ft_pair(const ft_pair<U1, U2>& p) : first(p.first), second(p.second) {}

    ft_pair& operator=(const ft_pair& rhs) {
        if (this != &rhs) {
            first = rhs.first;
            second = rhs.second;
        }
        return *this;
    }

    template <class U1, class U2>
    ft_pair& operator=(const ft_pair<U1, U2>& rhs) {
        first = rhs.first;
        second = rhs.second;
        return *this;
    }

    ~ft_pair() {}
};

template <class T1, class T2>
ft_pair<T1,T2> ft_make_pair(T1 t, T2 u) {
    return ft_pair<T1,T2>(t, u);
}
