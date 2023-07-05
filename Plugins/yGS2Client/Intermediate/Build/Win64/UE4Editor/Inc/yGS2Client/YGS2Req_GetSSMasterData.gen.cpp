// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Req_GetSSMasterData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Req_GetSSMasterData() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_GetSSMasterData_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_GetSSMasterData();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2SSMasterData();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2Req_GetSSMasterData::execGetMasterData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FYGS2SSMasterData*)Z_Param__Result=P_THIS->GetMasterData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_GetSSMasterData::execSetRequestParams)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_stage);
		P_GET_PROPERTY(FStrProperty,Z_Param_app_ver);
		P_GET_UBOOL(Z_Param_only_data_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRequestParams(Z_Param_stage,Z_Param_app_ver,Z_Param_only_data_id);
		P_NATIVE_END;
	}
	void UYGS2Req_GetSSMasterData::StaticRegisterNativesUYGS2Req_GetSSMasterData()
	{
		UClass* Class = UYGS2Req_GetSSMasterData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMasterData", &UYGS2Req_GetSSMasterData::execGetMasterData },
			{ "SetRequestParams", &UYGS2Req_GetSSMasterData::execSetRequestParams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2Req_GetSSMasterData_GetMasterData_Statics
	{
		struct YGS2Req_GetSSMasterData_eventGetMasterData_Parms
		{
			FYGS2SSMasterData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYGS2Req_GetSSMasterData_GetMasterData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_GetSSMasterData_eventGetMasterData_Parms, ReturnValue), Z_Construct_UScriptStruct_FYGS2SSMasterData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_GetSSMasterData_GetMasterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetSSMasterData_GetMasterData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetSSMasterData_GetMasterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_GetSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_GetSSMasterData_GetMasterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_GetSSMasterData, nullptr, "GetMasterData", nullptr, nullptr, sizeof(YGS2Req_GetSSMasterData_eventGetMasterData_Parms), Z_Construct_UFunction_UYGS2Req_GetSSMasterData_GetMasterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetSSMasterData_GetMasterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetSSMasterData_GetMasterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetSSMasterData_GetMasterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_GetSSMasterData_GetMasterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_GetSSMasterData_GetMasterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics
	{
		struct YGS2Req_GetSSMasterData_eventSetRequestParams_Parms
		{
			FString stage;
			FString app_ver;
			bool only_data_id;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_stage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_app_ver_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_app_ver;
		static void NewProp_only_data_id_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_only_data_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::NewProp_stage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::NewProp_stage = { "stage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_GetSSMasterData_eventSetRequestParams_Parms, stage), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::NewProp_stage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::NewProp_stage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::NewProp_app_ver_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::NewProp_app_ver = { "app_ver", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_GetSSMasterData_eventSetRequestParams_Parms, app_ver), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::NewProp_app_ver_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::NewProp_app_ver_MetaData)) };
	void Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::NewProp_only_data_id_SetBit(void* Obj)
	{
		((YGS2Req_GetSSMasterData_eventSetRequestParams_Parms*)Obj)->only_data_id = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::NewProp_only_data_id = { "only_data_id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2Req_GetSSMasterData_eventSetRequestParams_Parms), &Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::NewProp_only_data_id_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::NewProp_stage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::NewProp_app_ver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::NewProp_only_data_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_GetSSMasterData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_GetSSMasterData, nullptr, "SetRequestParams", nullptr, nullptr, sizeof(YGS2Req_GetSSMasterData_eventSetRequestParams_Parms), Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2Req_GetSSMasterData_NoRegister()
	{
		return UYGS2Req_GetSSMasterData::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2Req_GetSSMasterData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2Req_GetSSMasterData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYGS2RequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2Req_GetSSMasterData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2Req_GetSSMasterData_GetMasterData, "GetMasterData" }, // 4055049605
		{ &Z_Construct_UFunction_UYGS2Req_GetSSMasterData_SetRequestParams, "SetRequestParams" }, // 3922449756
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_GetSSMasterData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2Req_GetSSMasterData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2Req_GetSSMasterData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2Req_GetSSMasterData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2Req_GetSSMasterData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2Req_GetSSMasterData_Statics::ClassParams = {
		&UYGS2Req_GetSSMasterData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_GetSSMasterData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_GetSSMasterData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2Req_GetSSMasterData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2Req_GetSSMasterData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2Req_GetSSMasterData, 1928482854);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2Req_GetSSMasterData>()
	{
		return UYGS2Req_GetSSMasterData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2Req_GetSSMasterData(Z_Construct_UClass_UYGS2Req_GetSSMasterData, &UYGS2Req_GetSSMasterData::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2Req_GetSSMasterData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2Req_GetSSMasterData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
