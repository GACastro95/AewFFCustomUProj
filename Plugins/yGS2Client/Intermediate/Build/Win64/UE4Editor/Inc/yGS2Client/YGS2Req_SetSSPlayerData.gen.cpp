// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Req_SetSSPlayerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Req_SetSSPlayerData() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_SetSSPlayerData_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_SetSSPlayerData();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2SSPlayerData();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2Req_SetSSPlayerData::execGetPlayerData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FYGS2SSPlayerData*)Z_Param__Result=P_THIS->GetPlayerData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_SetSSPlayerData::execSetPlayerData)
	{
		P_GET_STRUCT(FYGS2SSPlayerData,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerData(Z_Param_Data);
		P_NATIVE_END;
	}
	void UYGS2Req_SetSSPlayerData::StaticRegisterNativesUYGS2Req_SetSSPlayerData()
	{
		UClass* Class = UYGS2Req_SetSSPlayerData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerData", &UYGS2Req_SetSSPlayerData::execGetPlayerData },
			{ "SetPlayerData", &UYGS2Req_SetSSPlayerData::execSetPlayerData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_GetPlayerData_Statics
	{
		struct YGS2Req_SetSSPlayerData_eventGetPlayerData_Parms
		{
			FYGS2SSPlayerData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_GetPlayerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_SetSSPlayerData_eventGetPlayerData_Parms, ReturnValue), Z_Construct_UScriptStruct_FYGS2SSPlayerData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_GetPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_GetPlayerData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_GetPlayerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_SetSSPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_GetPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_SetSSPlayerData, nullptr, "GetPlayerData", nullptr, nullptr, sizeof(YGS2Req_SetSSPlayerData_eventGetPlayerData_Parms), Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_GetPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_GetPlayerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_GetPlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_GetPlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_GetPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_GetPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_SetPlayerData_Statics
	{
		struct YGS2Req_SetSSPlayerData_eventSetPlayerData_Parms
		{
			FYGS2SSPlayerData Data;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_SetPlayerData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_SetSSPlayerData_eventSetPlayerData_Parms, Data), Z_Construct_UScriptStruct_FYGS2SSPlayerData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_SetPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_SetPlayerData_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_SetPlayerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_SetSSPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_SetPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_SetSSPlayerData, nullptr, "SetPlayerData", nullptr, nullptr, sizeof(YGS2Req_SetSSPlayerData_eventSetPlayerData_Parms), Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_SetPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_SetPlayerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_SetPlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_SetPlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_SetPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_SetPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2Req_SetSSPlayerData_NoRegister()
	{
		return UYGS2Req_SetSSPlayerData::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2Req_SetSSPlayerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2Req_SetSSPlayerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYGS2RequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2Req_SetSSPlayerData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_GetPlayerData, "GetPlayerData" }, // 3824089932
		{ &Z_Construct_UFunction_UYGS2Req_SetSSPlayerData_SetPlayerData, "SetPlayerData" }, // 982234973
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_SetSSPlayerData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2Req_SetSSPlayerData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2Req_SetSSPlayerData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2Req_SetSSPlayerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2Req_SetSSPlayerData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2Req_SetSSPlayerData_Statics::ClassParams = {
		&UYGS2Req_SetSSPlayerData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_SetSSPlayerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_SetSSPlayerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2Req_SetSSPlayerData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2Req_SetSSPlayerData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2Req_SetSSPlayerData, 4294434583);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2Req_SetSSPlayerData>()
	{
		return UYGS2Req_SetSSPlayerData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2Req_SetSSPlayerData(Z_Construct_UClass_UYGS2Req_SetSSPlayerData, &UYGS2Req_SetSSPlayerData::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2Req_SetSSPlayerData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2Req_SetSSPlayerData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
