#pragma once



template <typename Transformer, template <typename...> typename TypesContainer, typename... Types>
requires (can_transform <Transformer, TypesContainer, Types...>)
struct transformations <TypesContainer <Types...>, Transformer>
{
    using type = typename Transformer::template transform <TypesContainer, Types...>;
    
    operator auto () {
        return type {};
    }
};