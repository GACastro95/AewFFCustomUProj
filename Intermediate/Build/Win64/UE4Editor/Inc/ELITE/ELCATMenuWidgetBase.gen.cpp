// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELCATMenuWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCATMenuWidgetBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELCATMenuWidgetBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELCATMenuWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMainMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCreateTeamParam();
// End Cross Module References
	DEFINE_FUNCTION(UELCATMenuWidgetBase::execIsSameCreateTeamParam)
	{
		P_GET_STRUCT_REF(FCreateTeamParam,Z_Param_Out_A);
		P_GET_STRUCT_REF(FCreateTeamParam,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSameCreateTeamParam(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	void UELCATMenuWidgetBase::StaticRegisterNativesUELCATMenuWidgetBase()
	{
		UClass* Class = UELCATMenuWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsSameCreateTeamParam", &UELCATMenuWidgetBase::execIsSameCreateTeamParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics
	{
		struct ELCATMenuWidgetBase_eventIsSameCreateTeamParam_Parms
		{
			FCreateTeamParam A;
			FCreateTeamParam B;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCATMenuWidgetBase_eventIsSameCreateTeamParam_Parms, A), Z_Construct_UScriptStruct_FCreateTeamParam, METADATA_PARAMS(Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCATMenuWidgetBase_eventIsSameCreateTeamParam_Parms, B), Z_Construct_UScriptStruct_FCreateTeamParam, METADATA_PARAMS(Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::NewProp_B_MetaData)) };
	void Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCATMenuWidgetBase_eventIsSameCreateTeamParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCATMenuWidgetBase_eventIsSameCreateTeamParam_Parms), &Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCATMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCATMenuWidgetBase, nullptr, "IsSameCreateTeamParam", nullptr, nullptr, sizeof(ELCATMenuWidgetBase_eventIsSameCreateTeamParam_Parms), Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCATMenuWidgetBase_NoRegister()
	{
		return UELCATMenuWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELCATMenuWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCATMenuWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMainMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCATMenuWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCATMenuWidgetBase_IsSameCreateTeamParam, "IsSameCreateTeamParam" }, // 2146337026
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCATMenuWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCATMenuWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCATMenuWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCATMenuWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCATMenuWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCATMenuWidgetBase_Statics::ClassParams = {
		&UELCATMenuWidgetBase::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCATMenuWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCATMenuWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCATMenuWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCATMenuWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCATMenuWidgetBase, 1330543059);
	template<> ELITE_API UClass* StaticClass<UELCATMenuWidgetBase>()
	{
		return UELCATMenuWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCATMenuWidgetBase(Z_Construct_UClass_UELCATMenuWidgetBase, &UELCATMenuWidgetBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELCATMenuWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCATMenuWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
