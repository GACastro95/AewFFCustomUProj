// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/LobbyPacketPlayerIndex.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPacketPlayerIndex() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketPlayerIndex_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketPlayerIndex();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyPlayerIndex();
// End Cross Module References
	DEFINE_FUNCTION(ULobbyPacketPlayerIndex::execGetPlayerIndex)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out__PlayerIndexArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayerIndex(Z_Param_Out__PlayerIndexArray);
		P_NATIVE_END;
	}
	void ULobbyPacketPlayerIndex::StaticRegisterNativesULobbyPacketPlayerIndex()
	{
		UClass* Class = ULobbyPacketPlayerIndex::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerIndex", &ULobbyPacketPlayerIndex::execGetPlayerIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULobbyPacketPlayerIndex_GetPlayerIndex_Statics
	{
		struct LobbyPacketPlayerIndex_eventGetPlayerIndex_Parms
		{
			TArray<FString> _PlayerIndexArray;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__PlayerIndexArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__PlayerIndexArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULobbyPacketPlayerIndex_GetPlayerIndex_Statics::NewProp__PlayerIndexArray_Inner = { "_PlayerIndexArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULobbyPacketPlayerIndex_GetPlayerIndex_Statics::NewProp__PlayerIndexArray = { "_PlayerIndexArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LobbyPacketPlayerIndex_eventGetPlayerIndex_Parms, _PlayerIndexArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyPacketPlayerIndex_GetPlayerIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketPlayerIndex_GetPlayerIndex_Statics::NewProp__PlayerIndexArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketPlayerIndex_GetPlayerIndex_Statics::NewProp__PlayerIndexArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobbyPacketPlayerIndex_GetPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LobbyPacketPlayerIndex.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyPacketPlayerIndex_GetPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyPacketPlayerIndex, nullptr, "GetPlayerIndex", nullptr, nullptr, sizeof(LobbyPacketPlayerIndex_eventGetPlayerIndex_Parms), Z_Construct_UFunction_ULobbyPacketPlayerIndex_GetPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketPlayerIndex_GetPlayerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobbyPacketPlayerIndex_GetPlayerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketPlayerIndex_GetPlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobbyPacketPlayerIndex_GetPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULobbyPacketPlayerIndex_GetPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULobbyPacketPlayerIndex_NoRegister()
	{
		return ULobbyPacketPlayerIndex::StaticClass();
	}
	struct Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerIndex_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyPlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LobbyPlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULobbyPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULobbyPacketPlayerIndex_GetPlayerIndex, "GetPlayerIndex" }, // 2718047927
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LobbyPacketPlayerIndex.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LobbyPacketPlayerIndex.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::NewProp_PlayerIndex_Inner = { "PlayerIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPacketPlayerIndex" },
		{ "ModuleRelativePath", "Public/LobbyPacketPlayerIndex.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULobbyPacketPlayerIndex, PlayerIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::NewProp_PlayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::NewProp_LobbyPlayerIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPacketPlayerIndex" },
		{ "ModuleRelativePath", "Public/LobbyPacketPlayerIndex.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::NewProp_LobbyPlayerIndex = { "LobbyPlayerIndex", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULobbyPacketPlayerIndex, LobbyPlayerIndex), Z_Construct_UScriptStruct_FLobbyPlayerIndex, METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::NewProp_LobbyPlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::NewProp_LobbyPlayerIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::NewProp_PlayerIndex_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::NewProp_LobbyPlayerIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyPacketPlayerIndex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::ClassParams = {
		&ULobbyPacketPlayerIndex::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULobbyPacketPlayerIndex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULobbyPacketPlayerIndex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULobbyPacketPlayerIndex, 1839149184);
	template<> ABP_200508_API UClass* StaticClass<ULobbyPacketPlayerIndex>()
	{
		return ULobbyPacketPlayerIndex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULobbyPacketPlayerIndex(Z_Construct_UClass_ULobbyPacketPlayerIndex, &ULobbyPacketPlayerIndex::StaticClass, TEXT("/Script/ABP_200508"), TEXT("ULobbyPacketPlayerIndex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULobbyPacketPlayerIndex);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
