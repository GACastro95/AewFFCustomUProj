// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMatchRecordsUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchRecordsUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELMatchRecordsUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELMatchRecordsUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
	DEFINE_FUNCTION(UELMatchRecordsUtilityFunction::execUpdateMatchRecordsInfo)
	{
		P_GET_STRUCT_REF(FELMatchRecordsProfileInfo_BP,Z_Param_Out_ProfileInfo);
		P_GET_TARRAY_REF(FELMatchRecordsWrestlerInfo_BP,Z_Param_Out_WrestlerInfos);
		P_GET_STRUCT(FDateTime,Z_Param_Now);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMatchRecordsUtilityFunction::UpdateMatchRecordsInfo(Z_Param_Out_ProfileInfo,Z_Param_Out_WrestlerInfos,Z_Param_Now,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	void UELMatchRecordsUtilityFunction::StaticRegisterNativesUELMatchRecordsUtilityFunction()
	{
		UClass* Class = UELMatchRecordsUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateMatchRecordsInfo", &UELMatchRecordsUtilityFunction::execUpdateMatchRecordsInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics
	{
		struct ELMatchRecordsUtilityFunction_eventUpdateMatchRecordsInfo_Parms
		{
			FELMatchRecordsProfileInfo_BP ProfileInfo;
			TArray<FELMatchRecordsWrestlerInfo_BP> WrestlerInfos;
			FDateTime Now;
			uint8 _saveDataAccessFlag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WrestlerInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Now;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::NewProp_ProfileInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::NewProp_ProfileInfo = { "ProfileInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchRecordsUtilityFunction_eventUpdateMatchRecordsInfo_Parms, ProfileInfo), Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_BP, METADATA_PARAMS(Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::NewProp_ProfileInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::NewProp_ProfileInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::NewProp_WrestlerInfos_Inner = { "WrestlerInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_BP, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::NewProp_WrestlerInfos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::NewProp_WrestlerInfos = { "WrestlerInfos", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchRecordsUtilityFunction_eventUpdateMatchRecordsInfo_Parms, WrestlerInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::NewProp_WrestlerInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::NewProp_WrestlerInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::NewProp_Now = { "Now", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchRecordsUtilityFunction_eventUpdateMatchRecordsInfo_Parms, Now), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMatchRecordsUtilityFunction_eventUpdateMatchRecordsInfo_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::NewProp_ProfileInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::NewProp_WrestlerInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::NewProp_WrestlerInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::NewProp_Now,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMatchRecordsUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMatchRecordsUtilityFunction, nullptr, "UpdateMatchRecordsInfo", nullptr, nullptr, sizeof(ELMatchRecordsUtilityFunction_eventUpdateMatchRecordsInfo_Parms), Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELMatchRecordsUtilityFunction_NoRegister()
	{
		return UELMatchRecordsUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELMatchRecordsUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMatchRecordsUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELMatchRecordsUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELMatchRecordsUtilityFunction_UpdateMatchRecordsInfo, "UpdateMatchRecordsInfo" }, // 3955123316
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMatchRecordsUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMatchRecordsUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMatchRecordsUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMatchRecordsUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMatchRecordsUtilityFunction_Statics::ClassParams = {
		&UELMatchRecordsUtilityFunction::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELMatchRecordsUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMatchRecordsUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMatchRecordsUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMatchRecordsUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMatchRecordsUtilityFunction, 4048656624);
	template<> ABP_200508_API UClass* StaticClass<UELMatchRecordsUtilityFunction>()
	{
		return UELMatchRecordsUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMatchRecordsUtilityFunction(Z_Construct_UClass_UELMatchRecordsUtilityFunction, &UELMatchRecordsUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELMatchRecordsUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMatchRecordsUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
