// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSGameRankDataUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSGameRankDataUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSGameRankDataUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSGameRankDataUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSGameRankData();
// End Cross Module References
	DEFINE_FUNCTION(UELSSGameRankDataUtility::execGetSSPlayerRankExp)
	{
		P_GET_STRUCT_REF(FELSSGameRankData,Z_Param_Out_RankData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSGameRankDataUtility::GetSSPlayerRankExp(Z_Param_Out_RankData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameRankDataUtility::execSetSSPlayerRankExp)
	{
		P_GET_STRUCT_REF(FELSSGameRankData,Z_Param_Out_RankData);
		P_GET_PROPERTY(FIntProperty,Z_Param_Exp);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSGameRankDataUtility::SetSSPlayerRankExp(Z_Param_Out_RankData,Z_Param_Exp);
		P_NATIVE_END;
	}
	void UELSSGameRankDataUtility::StaticRegisterNativesUELSSGameRankDataUtility()
	{
		UClass* Class = UELSSGameRankDataUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSSPlayerRankExp", &UELSSGameRankDataUtility::execGetSSPlayerRankExp },
			{ "SetSSPlayerRankExp", &UELSSGameRankDataUtility::execSetSSPlayerRankExp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSGameRankDataUtility_GetSSPlayerRankExp_Statics
	{
		struct ELSSGameRankDataUtility_eventGetSSPlayerRankExp_Parms
		{
			FELSSGameRankData RankData;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RankData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameRankDataUtility_GetSSPlayerRankExp_Statics::NewProp_RankData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameRankDataUtility_GetSSPlayerRankExp_Statics::NewProp_RankData = { "RankData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameRankDataUtility_eventGetSSPlayerRankExp_Parms, RankData), Z_Construct_UScriptStruct_FELSSGameRankData, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameRankDataUtility_GetSSPlayerRankExp_Statics::NewProp_RankData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameRankDataUtility_GetSSPlayerRankExp_Statics::NewProp_RankData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSGameRankDataUtility_GetSSPlayerRankExp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameRankDataUtility_eventGetSSPlayerRankExp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameRankDataUtility_GetSSPlayerRankExp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameRankDataUtility_GetSSPlayerRankExp_Statics::NewProp_RankData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameRankDataUtility_GetSSPlayerRankExp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameRankDataUtility_GetSSPlayerRankExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameRankDataUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameRankDataUtility_GetSSPlayerRankExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameRankDataUtility, nullptr, "GetSSPlayerRankExp", nullptr, nullptr, sizeof(ELSSGameRankDataUtility_eventGetSSPlayerRankExp_Parms), Z_Construct_UFunction_UELSSGameRankDataUtility_GetSSPlayerRankExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameRankDataUtility_GetSSPlayerRankExp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameRankDataUtility_GetSSPlayerRankExp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameRankDataUtility_GetSSPlayerRankExp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameRankDataUtility_GetSSPlayerRankExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameRankDataUtility_GetSSPlayerRankExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameRankDataUtility_SetSSPlayerRankExp_Statics
	{
		struct ELSSGameRankDataUtility_eventSetSSPlayerRankExp_Parms
		{
			FELSSGameRankData RankData;
			int32 Exp;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RankData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Exp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameRankDataUtility_SetSSPlayerRankExp_Statics::NewProp_RankData = { "RankData", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameRankDataUtility_eventSetSSPlayerRankExp_Parms, RankData), Z_Construct_UScriptStruct_FELSSGameRankData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSGameRankDataUtility_SetSSPlayerRankExp_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameRankDataUtility_eventSetSSPlayerRankExp_Parms, Exp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameRankDataUtility_SetSSPlayerRankExp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameRankDataUtility_SetSSPlayerRankExp_Statics::NewProp_RankData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameRankDataUtility_SetSSPlayerRankExp_Statics::NewProp_Exp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameRankDataUtility_SetSSPlayerRankExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameRankDataUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameRankDataUtility_SetSSPlayerRankExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameRankDataUtility, nullptr, "SetSSPlayerRankExp", nullptr, nullptr, sizeof(ELSSGameRankDataUtility_eventSetSSPlayerRankExp_Parms), Z_Construct_UFunction_UELSSGameRankDataUtility_SetSSPlayerRankExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameRankDataUtility_SetSSPlayerRankExp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameRankDataUtility_SetSSPlayerRankExp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameRankDataUtility_SetSSPlayerRankExp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameRankDataUtility_SetSSPlayerRankExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameRankDataUtility_SetSSPlayerRankExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSGameRankDataUtility_NoRegister()
	{
		return UELSSGameRankDataUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELSSGameRankDataUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSGameRankDataUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSGameRankDataUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSGameRankDataUtility_GetSSPlayerRankExp, "GetSSPlayerRankExp" }, // 869142312
		{ &Z_Construct_UFunction_UELSSGameRankDataUtility_SetSSPlayerRankExp, "SetSSPlayerRankExp" }, // 1446833330
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameRankDataUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSGameRankDataUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSGameRankDataUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSGameRankDataUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSGameRankDataUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSGameRankDataUtility_Statics::ClassParams = {
		&UELSSGameRankDataUtility::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSGameRankDataUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameRankDataUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSGameRankDataUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSGameRankDataUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSGameRankDataUtility, 2624073507);
	template<> ABP_200508_API UClass* StaticClass<UELSSGameRankDataUtility>()
	{
		return UELSSGameRankDataUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSGameRankDataUtility(Z_Construct_UClass_UELSSGameRankDataUtility, &UELSSGameRankDataUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSGameRankDataUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSGameRankDataUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
