template<typename T>
struct remove_memfn_qualifiers;

template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...)> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...);
};
 
// specialization for variadic functions such as std::printf
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......)> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......);
};

// specialization for function types that have cv-qualifiers
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) const> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) const;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) volatile> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) volatile;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) const volatile> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) const volatile;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) const> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) const;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) volatile> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) volatile;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) const volatile> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) const volatile;
};
// specialization for function types that have ref-qualifiers
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) &> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) &;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) const &> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) const &;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) volatile &> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) volatile &;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) const volatile &> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) const volatile &;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) &> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) &;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) const &> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) const &;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) volatile &> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) volatile &;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) const volatile &> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) const volatile &;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) &&> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) &&;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) const &&> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) const &&;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) volatile &&> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) volatile &&;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) const volatile &&> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) const volatile &&;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) &&> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) &&;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) const &&> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) const &&;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) volatile &&> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) volatile &&;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) const volatile &&> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) const volatile &&;
};
 
// specializations for noexcept versions of all the above (C++17 and later) 
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) noexcept> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) noexcept;
}; 
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) noexcept> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) const noexcept> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) const noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) volatile noexcept> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) volatile noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) const volatile noexcept> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) const volatile noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) const noexcept> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) const noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) volatile noexcept> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) volatile noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) const volatile noexcept> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) const volatile noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) & noexcept> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) & noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) const & noexcept> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) const & noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) volatile & noexcept> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) volatile & noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) const volatile &  noexcept> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) const volatile & noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) & noexcept> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) & noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) const &  noexcept> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) const & noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) volatile & noexcept> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) volatile & noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) const volatile & noexcept> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) const volatile & noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) && noexcept> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) && noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) const && noexcept> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) const && noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) volatile && noexcept> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) volatile && noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts...) const volatile && noexcept> {
    using type = ReturnType(ObjType::*)(Ts...);
    using original_type = ReturnType(ObjType::*)(Ts...) const volatile && noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) && noexcept> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) && noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) const && noexcept> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) const && noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) volatile && noexcept> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) volatile && noexcept;
};
template<typename ReturnType, typename ObjType, typename ...Ts>
struct remove_memfn_qualifiers<ReturnType(ObjType::*)(Ts......) const volatile && noexcept> {
    using type = ReturnType(ObjType::*)(Ts......);
    using original_type = ReturnType(ObjType::*)(Ts......) const volatile && noexcept;
};
