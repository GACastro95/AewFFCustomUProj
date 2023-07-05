// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Req_GetSSPlayerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Req_GetSSPlayerData() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_GetSSPlayerData_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_GetSSPlayerData();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2SSPlayerData();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2Req_GetSSPlayerData::execGetPlayerData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FYGS2SSPlayerData*)Z_Param__Result=P_THIS->GetPlayerData();
		P_NATIVE_END;
	}
	void UYGS2Req_GetSSPlayerData::StaticRegisterNativesUYGS2Req_GetSSPlayerData()
	{
		UClass* Class = UYGS2Req_GetSSPlayerData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerData", &UYGS2Req_GetSSPlayerData::execGetPlayerData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2Req_GetSSPlayerData_GetPlayerData_Statics
	{
		struct YGS2Req_GetSSPlayerData_eventGetPlayerData_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYGS2Req_GetSSPlayerData_GetPlayerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_GetSSPlayerData_eventGetPlayerData_Parms, ReturnValue), Z_Construct_UScriptStruct_FYGS2SSPlayerData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_GetSSPlayerData_GetPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetSSPlayerData_GetPlayerData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetSSPlayerData_GetPlayerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_GetSSPlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_GetSSPlayerData_GetPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_GetSSPlayerData, nullptr, "GetPlayerData", nullptr, nullptr, sizeof(YGS2Req_GetSSPlayerData_eventGetPlayerData_Parms), Z_Construct_UFunction_UYGS2Req_GetSSPlayerData_GetPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetSSPlayerData_GetPlayerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetSSPlayerData_GetPlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetSSPlayerData_GetPlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_GetSSPlayerData_GetPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_GetSSPlayerData_GetPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2Req_GetSSPlayerData_NoRegister()
	{
		return UYGS2Req_GetSSPlayerData::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2Req_GetSSPlayerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2Req_GetSSPlayerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYGS2RequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2Req_GetSSPlayerData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2Req_GetSSPlayerData_GetPlayerData, "GetPlayerData" }, // 3960253374
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_GetSSPlayerData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2Req_GetSSPlayerData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2Req_GetSSPlayerData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2Req_GetSSPlayerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2Req_GetSSPlayerData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2Req_GetSSPlayerData_Statics::ClassParams = {
		&UYGS2Req_GetSSPlayerData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_GetSSPlayerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_GetSSPlayerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2Req_GetSSPlayerData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2Req_GetSSPlayerData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2Req_GetSSPlayerData, 2544086440);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2Req_GetSSPlayerData>()
	{
		return UYGS2Req_GetSSPlayerData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2Req_GetSSPlayerData(Z_Construct_UClass_UYGS2Req_GetSSPlayerData, &UYGS2Req_GetSSPlayerData::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2Req_GetSSPlayerData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2Req_GetSSPlayerData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
