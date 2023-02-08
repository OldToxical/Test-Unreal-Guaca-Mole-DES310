// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyPaperCharacter_generated_h
#error "MyPaperCharacter.generated.h already included, missing '#pragma once' in MyPaperCharacter.h"
#endif
#define MYPROJECT_MyPaperCharacter_generated_h

#define FID_MyProject_Source_MyProject_MyPaperCharacter_h_15_SPARSE_DATA
#define FID_MyProject_Source_MyProject_MyPaperCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execmoveRight); \
	DECLARE_FUNCTION(execmoveLeft); \
	DECLARE_FUNCTION(execUpdateRotation); \
	DECLARE_FUNCTION(execUpdateAnimation);


#define FID_MyProject_Source_MyProject_MyPaperCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execmoveRight); \
	DECLARE_FUNCTION(execmoveLeft); \
	DECLARE_FUNCTION(execUpdateRotation); \
	DECLARE_FUNCTION(execUpdateAnimation);


#define FID_MyProject_Source_MyProject_MyPaperCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPaperCharacter(); \
	friend struct Z_Construct_UClass_AMyPaperCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyPaperCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyPaperCharacter)


#define FID_MyProject_Source_MyProject_MyPaperCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyPaperCharacter(); \
	friend struct Z_Construct_UClass_AMyPaperCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyPaperCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyPaperCharacter)


#define FID_MyProject_Source_MyProject_MyPaperCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPaperCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPaperCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPaperCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPaperCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPaperCharacter(AMyPaperCharacter&&); \
	NO_API AMyPaperCharacter(const AMyPaperCharacter&); \
public:


#define FID_MyProject_Source_MyProject_MyPaperCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPaperCharacter(AMyPaperCharacter&&); \
	NO_API AMyPaperCharacter(const AMyPaperCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPaperCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPaperCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPaperCharacter)


#define FID_MyProject_Source_MyProject_MyPaperCharacter_h_12_PROLOG
#define FID_MyProject_Source_MyProject_MyPaperCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_MyPaperCharacter_h_15_SPARSE_DATA \
	FID_MyProject_Source_MyProject_MyPaperCharacter_h_15_RPC_WRAPPERS \
	FID_MyProject_Source_MyProject_MyPaperCharacter_h_15_INCLASS \
	FID_MyProject_Source_MyProject_MyPaperCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject_Source_MyProject_MyPaperCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_MyPaperCharacter_h_15_SPARSE_DATA \
	FID_MyProject_Source_MyProject_MyPaperCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_MyPaperCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_MyPaperCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyPaperCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Source_MyProject_MyPaperCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
