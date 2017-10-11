# -------------------------------------------------------------
# file: CMakeLists.txt
# -------------------------------------------------------------
# -------------------------------------------------------------
# Created October 11, 2017 by Perkins
# Last Change: 2017-10-11 08:19:15 d3g096
# -------------------------------------------------------------

set(loki_hdr
  loki/AbstractFactory.h
  loki/Allocator.h
  loki/AssocVector.h
  loki/CachedFactory.h
  loki/Checker.h
  loki/CheckReturn.h
  loki/Concatenate.h
  loki/ConstPolicy.h
  loki/DataGenerators.h
  loki/EmptyType.h
  loki/Factory.h
  loki/ForEachType.h
  loki/Function.h
  loki/Functor.h
  loki/HierarchyGenerators.h
  loki/Key.h
  loki/LevelMutex.h
  loki/LockingPtr.h
  loki/LokiExport.h
  loki/LokiTypeInfo.h
  loki/MultiMethods.h
  loki/NullType.h
  loki/OrderedStatic.h
  loki/Pimpl.h
  loki/RefToValue.h
  loki/Register.h
  loki/SafeBits.h
  loki/SafeFormat.h
  loki/ScopeGuard.h
  loki/Sequence.h
  loki/Singleton.h
  loki/SmallObj.h
  loki/SmartPtr.h
  loki/SPCachedFactory.h
  loki/static_check.h
  loki/StrongPtr.h
  loki/ThreadLocal.h
  loki/Threads.h
  loki/Tuple.h
  loki/Typelist.h
  loki/TypelistMacros.h
  loki/TypeManip.h
  loki/TypeTraits.h
  loki/Visitor.h
  )

set(loki_yasli_hdr
  loki/yasli/platform.h
  loki/yasli/random.h
  loki/yasli/yasli_fill_iterator.h
  loki/yasli/yasli_memory.h
  loki/yasli/yasli_protocols.h
  loki/yasli/yasli_traits.h
  loki/yasli/yasli_vector.h
  )

set(loki_flex_hdr
  loki/flex/allocatorstringstorage.h
  loki/flex/cowstringopt.h
  loki/flex/flex_string.h
  loki/flex/flex_string_details.h
  loki/flex/flex_string_shell.h
  loki/flex/simplestringstorage.h
  loki/flex/smallstringopt.h
  loki/flex/vectorstringstorage.h
  )

install(FILES 
  ${loki_hdr}
  DESTINATION include/loki
)


install(FILES 
  ${loki_flex_hdr}
  DESTINATION include/loki/flex
)

install(FILES 
  ${loki_yasli_hdr}
  DESTINATION include/loki/yasli
)
