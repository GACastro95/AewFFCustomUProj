// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MiniGame_TriviaQuiz.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGame_TriviaQuiz() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FMiniGame_TriviaQuiz::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MiniGame_TriviaQuiz"), sizeof(FMiniGame_TriviaQuiz), Get_Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMiniGame_TriviaQuiz>()
{
	return FMiniGame_TriviaQuiz::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniGame_TriviaQuiz(FMiniGame_TriviaQuiz::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MiniGame_TriviaQuiz"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_TriviaQuiz
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_TriviaQuiz()
	{
		UScriptStruct::DeferCppStructOps<FMiniGame_TriviaQuiz>(FName(TEXT("MiniGame_TriviaQuiz")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_TriviaQuiz;
	struct Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCheckQuizTextMode_MetaData[];
#endif
		static void NewProp_bIsCheckQuizTextMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCheckQuizTextMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuizIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QuizIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MiniGame_TriviaQuiz.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniGame_TriviaQuiz>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::NewProp_bIsCheckQuizTextMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_TriviaQuiz" },
		{ "ModuleRelativePath", "Public/MiniGame_TriviaQuiz.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::NewProp_bIsCheckQuizTextMode_SetBit(void* Obj)
	{
		((FMiniGame_TriviaQuiz*)Obj)->bIsCheckQuizTextMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::NewProp_bIsCheckQuizTextMode = { "bIsCheckQuizTextMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGame_TriviaQuiz), &Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::NewProp_bIsCheckQuizTextMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::NewProp_bIsCheckQuizTextMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::NewProp_bIsCheckQuizTextMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::NewProp_QuizIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_TriviaQuiz" },
		{ "ModuleRelativePath", "Public/MiniGame_TriviaQuiz.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::NewProp_QuizIndex = { "QuizIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGame_TriviaQuiz, QuizIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::NewProp_QuizIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::NewProp_QuizIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::NewProp_bIsCheckQuizTextMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::NewProp_QuizIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MiniGame_TriviaQuiz",
		sizeof(FMiniGame_TriviaQuiz),
		alignof(FMiniGame_TriviaQuiz),
		Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniGame_TriviaQuiz"), sizeof(FMiniGame_TriviaQuiz), Get_Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniGame_TriviaQuiz_Hash() { return 1022996932U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
