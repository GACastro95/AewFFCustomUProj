// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/LobbyPacketJsonData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPacketJsonData() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketJsonData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_ULobbyPacketJsonData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(ULobbyPacketJsonData::execGetJsonData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetJsonData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULobbyPacketJsonData::execSetup)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__JsonData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Setup(Z_Param__JsonData);
		P_NATIVE_END;
	}
	void ULobbyPacketJsonData::StaticRegisterNativesULobbyPacketJsonData()
	{
		UClass* Class = ULobbyPacketJsonData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetJsonData", &ULobbyPacketJsonData::execGetJsonData },
			{ "Setup", &ULobbyPacketJsonData::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULobbyPacketJsonData_GetJsonData_Statics
	{
		struct LobbyPacketJsonData_eventGetJsonData_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULobbyPacketJsonData_GetJsonData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LobbyPacketJsonData_eventGetJsonData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyPacketJsonData_GetJsonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketJsonData_GetJsonData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobbyPacketJsonData_GetJsonData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LobbyPacketJsonData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyPacketJsonData_GetJsonData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyPacketJsonData, nullptr, "GetJsonData", nullptr, nullptr, sizeof(LobbyPacketJsonData_eventGetJsonData_Parms), Z_Construct_UFunction_ULobbyPacketJsonData_GetJsonData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketJsonData_GetJsonData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobbyPacketJsonData_GetJsonData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketJsonData_GetJsonData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobbyPacketJsonData_GetJsonData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULobbyPacketJsonData_GetJsonData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULobbyPacketJsonData_Setup_Statics
	{
		struct LobbyPacketJsonData_eventSetup_Parms
		{
			FString _JsonData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__JsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__JsonData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobbyPacketJsonData_Setup_Statics::NewProp__JsonData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULobbyPacketJsonData_Setup_Statics::NewProp__JsonData = { "_JsonData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LobbyPacketJsonData_eventSetup_Parms, _JsonData), METADATA_PARAMS(Z_Construct_UFunction_ULobbyPacketJsonData_Setup_Statics::NewProp__JsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketJsonData_Setup_Statics::NewProp__JsonData_MetaData)) };
	void Z_Construct_UFunction_ULobbyPacketJsonData_Setup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LobbyPacketJsonData_eventSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULobbyPacketJsonData_Setup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LobbyPacketJsonData_eventSetup_Parms), &Z_Construct_UFunction_ULobbyPacketJsonData_Setup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyPacketJsonData_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketJsonData_Setup_Statics::NewProp__JsonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyPacketJsonData_Setup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULobbyPacketJsonData_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LobbyPacketJsonData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyPacketJsonData_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyPacketJsonData, nullptr, "Setup", nullptr, nullptr, sizeof(LobbyPacketJsonData_eventSetup_Parms), Z_Construct_UFunction_ULobbyPacketJsonData_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketJsonData_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULobbyPacketJsonData_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyPacketJsonData_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULobbyPacketJsonData_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULobbyPacketJsonData_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULobbyPacketJsonData_NoRegister()
	{
		return ULobbyPacketJsonData::StaticClass();
	}
	struct Z_Construct_UClass_ULobbyPacketJsonData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULobbyPacketJsonData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULobbyPacketJsonData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULobbyPacketJsonData_GetJsonData, "GetJsonData" }, // 1226187974
		{ &Z_Construct_UFunction_ULobbyPacketJsonData_Setup, "Setup" }, // 4027643357
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketJsonData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LobbyPacketJsonData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LobbyPacketJsonData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULobbyPacketJsonData_Statics::NewProp_JsonData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyPacketJsonData" },
		{ "ModuleRelativePath", "Public/LobbyPacketJsonData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULobbyPacketJsonData_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULobbyPacketJsonData, JsonData), METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketJsonData_Statics::NewProp_JsonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketJsonData_Statics::NewProp_JsonData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULobbyPacketJsonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyPacketJsonData_Statics::NewProp_JsonData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULobbyPacketJsonData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyPacketJsonData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULobbyPacketJsonData_Statics::ClassParams = {
		&ULobbyPacketJsonData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULobbyPacketJsonData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketJsonData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULobbyPacketJsonData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyPacketJsonData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULobbyPacketJsonData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULobbyPacketJsonData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULobbyPacketJsonData, 1427145760);
	template<> ABP_200508_API UClass* StaticClass<ULobbyPacketJsonData>()
	{
		return ULobbyPacketJsonData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULobbyPacketJsonData(Z_Construct_UClass_ULobbyPacketJsonData, &ULobbyPacketJsonData::StaticClass, TEXT("/Script/ABP_200508"), TEXT("ULobbyPacketJsonData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULobbyPacketJsonData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
