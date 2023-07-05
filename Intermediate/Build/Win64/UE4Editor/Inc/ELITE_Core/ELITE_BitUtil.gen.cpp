// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/ELITE_BitUtil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELITE_BitUtil() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UELITE_BitUtil_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELITE_BitUtil();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EBasicFlagResult();
// End Cross Module References
	DEFINE_FUNCTION(UELITE_BitUtil::execBitBranch)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_PROPERTY(FByteProperty,Z_Param_BitIndex);
		P_GET_ENUM_REF(EBasicFlagResult,Z_Param_Out_resultType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELITE_BitUtil::BitBranch(Z_Param_Out_Value,Z_Param_BitIndex,(EBasicFlagResult&)(Z_Param_Out_resultType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELITE_BitUtil::execCheckBit)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_PROPERTY(FByteProperty,Z_Param_BitIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELITE_BitUtil::CheckBit(Z_Param_Out_Value,Z_Param_BitIndex);
		P_NATIVE_END;
	}
	void UELITE_BitUtil::StaticRegisterNativesUELITE_BitUtil()
	{
		UClass* Class = UELITE_BitUtil::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BitBranch", &UELITE_BitUtil::execBitBranch },
			{ "CheckBit", &UELITE_BitUtil::execCheckBit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics
	{
		struct ELITE_BitUtil_eventBitBranch_Parms
		{
			int32 Value;
			uint8 BitIndex;
			EBasicFlagResult resultType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BitIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_resultType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_resultType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELITE_BitUtil_eventBitBranch_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::NewProp_BitIndex = { "BitIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELITE_BitUtil_eventBitBranch_Parms, BitIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::NewProp_resultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::NewProp_resultType = { "resultType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELITE_BitUtil_eventBitBranch_Parms, resultType), Z_Construct_UEnum_ELITE_Core_EBasicFlagResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::NewProp_BitIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::NewProp_resultType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::NewProp_resultType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELITE_BitUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELITE_BitUtil, nullptr, "BitBranch", nullptr, nullptr, sizeof(ELITE_BitUtil_eventBitBranch_Parms), Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELITE_BitUtil_BitBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELITE_BitUtil_BitBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics
	{
		struct ELITE_BitUtil_eventCheckBit_Parms
		{
			int32 Value;
			uint8 BitIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BitIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELITE_BitUtil_eventCheckBit_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::NewProp_BitIndex = { "BitIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELITE_BitUtil_eventCheckBit_Parms, BitIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELITE_BitUtil_eventCheckBit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELITE_BitUtil_eventCheckBit_Parms), &Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::NewProp_BitIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELITE_BitUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELITE_BitUtil, nullptr, "CheckBit", nullptr, nullptr, sizeof(ELITE_BitUtil_eventCheckBit_Parms), Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELITE_BitUtil_CheckBit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELITE_BitUtil_CheckBit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELITE_BitUtil_NoRegister()
	{
		return UELITE_BitUtil::StaticClass();
	}
	struct Z_Construct_UClass_UELITE_BitUtil_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELITE_BitUtil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELITE_BitUtil_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELITE_BitUtil_BitBranch, "BitBranch" }, // 231626325
		{ &Z_Construct_UFunction_UELITE_BitUtil_CheckBit, "CheckBit" }, // 360611875
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELITE_BitUtil_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELITE_BitUtil.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELITE_BitUtil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELITE_BitUtil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELITE_BitUtil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELITE_BitUtil_Statics::ClassParams = {
		&UELITE_BitUtil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELITE_BitUtil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELITE_BitUtil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELITE_BitUtil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELITE_BitUtil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELITE_BitUtil, 3276140887);
	template<> ELITE_CORE_API UClass* StaticClass<UELITE_BitUtil>()
	{
		return UELITE_BitUtil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELITE_BitUtil(Z_Construct_UClass_UELITE_BitUtil, &UELITE_BitUtil::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UELITE_BitUtil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELITE_BitUtil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
