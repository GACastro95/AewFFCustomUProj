// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELArenaUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELArenaUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELArenaUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELArenaUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FArenaCustomizeParam();
// End Cross Module References
	DEFINE_FUNCTION(UELArenaUtilityFunction::execCompareArenaCustomizeParam)
	{
		P_GET_STRUCT_REF(FArenaCustomizeParam,Z_Param_Out_A);
		P_GET_STRUCT_REF(FArenaCustomizeParam,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELArenaUtilityFunction::CompareArenaCustomizeParam(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	void UELArenaUtilityFunction::StaticRegisterNativesUELArenaUtilityFunction()
	{
		UClass* Class = UELArenaUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompareArenaCustomizeParam", &UELArenaUtilityFunction::execCompareArenaCustomizeParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics
	{
		struct ELArenaUtilityFunction_eventCompareArenaCustomizeParam_Parms
		{
			FArenaCustomizeParam A;
			FArenaCustomizeParam B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELArenaUtilityFunction_eventCompareArenaCustomizeParam_Parms, A), Z_Construct_UScriptStruct_FArenaCustomizeParam, METADATA_PARAMS(Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELArenaUtilityFunction_eventCompareArenaCustomizeParam_Parms, B), Z_Construct_UScriptStruct_FArenaCustomizeParam, METADATA_PARAMS(Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::NewProp_B_MetaData)) };
	void Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELArenaUtilityFunction_eventCompareArenaCustomizeParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELArenaUtilityFunction_eventCompareArenaCustomizeParam_Parms), &Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELArenaUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELArenaUtilityFunction, nullptr, "CompareArenaCustomizeParam", nullptr, nullptr, sizeof(ELArenaUtilityFunction_eventCompareArenaCustomizeParam_Parms), Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELArenaUtilityFunction_NoRegister()
	{
		return UELArenaUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELArenaUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELArenaUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELArenaUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELArenaUtilityFunction_CompareArenaCustomizeParam, "CompareArenaCustomizeParam" }, // 3854815091
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELArenaUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELArenaUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELArenaUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELArenaUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELArenaUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELArenaUtilityFunction_Statics::ClassParams = {
		&UELArenaUtilityFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELArenaUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELArenaUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELArenaUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELArenaUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELArenaUtilityFunction, 1285587137);
	template<> ABP_200508_API UClass* StaticClass<UELArenaUtilityFunction>()
	{
		return UELArenaUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELArenaUtilityFunction(Z_Construct_UClass_UELArenaUtilityFunction, &UELArenaUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELArenaUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELArenaUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
