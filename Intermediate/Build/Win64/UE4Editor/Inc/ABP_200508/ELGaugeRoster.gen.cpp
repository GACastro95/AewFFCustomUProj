// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELGaugeRoster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGaugeRoster() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELGaugeRoster_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGaugeRoster();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELTagMatchIconBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELGaugeRoster::execSetNativeParam)
	{
		P_GET_OBJECT(UELTagMatchIconBase,Z_Param_TagMatchIcon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNativeParam(Z_Param_TagMatchIcon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGaugeRoster::execSetTagActive_N)
	{
		P_GET_UBOOL(Z_Param_bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTagActive_N(Z_Param_bActive);
		P_NATIVE_END;
	}
	void UELGaugeRoster::StaticRegisterNativesUELGaugeRoster()
	{
		UClass* Class = UELGaugeRoster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetNativeParam", &UELGaugeRoster::execSetNativeParam },
			{ "SetTagActive_N", &UELGaugeRoster::execSetTagActive_N },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELGaugeRoster_SetNativeParam_Statics
	{
		struct ELGaugeRoster_eventSetNativeParam_Parms
		{
			UELTagMatchIconBase* TagMatchIcon;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagMatchIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TagMatchIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGaugeRoster_SetNativeParam_Statics::NewProp_TagMatchIcon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGaugeRoster_SetNativeParam_Statics::NewProp_TagMatchIcon = { "TagMatchIcon", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGaugeRoster_eventSetNativeParam_Parms, TagMatchIcon), Z_Construct_UClass_UELTagMatchIconBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELGaugeRoster_SetNativeParam_Statics::NewProp_TagMatchIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGaugeRoster_SetNativeParam_Statics::NewProp_TagMatchIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGaugeRoster_SetNativeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGaugeRoster_SetNativeParam_Statics::NewProp_TagMatchIcon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGaugeRoster_SetNativeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGaugeRoster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGaugeRoster_SetNativeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGaugeRoster, nullptr, "SetNativeParam", nullptr, nullptr, sizeof(ELGaugeRoster_eventSetNativeParam_Parms), Z_Construct_UFunction_UELGaugeRoster_SetNativeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGaugeRoster_SetNativeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGaugeRoster_SetNativeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGaugeRoster_SetNativeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGaugeRoster_SetNativeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGaugeRoster_SetNativeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGaugeRoster_SetTagActive_N_Statics
	{
		struct ELGaugeRoster_eventSetTagActive_N_Parms
		{
			bool bActive;
		};
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELGaugeRoster_SetTagActive_N_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((ELGaugeRoster_eventSetTagActive_N_Parms*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELGaugeRoster_SetTagActive_N_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELGaugeRoster_eventSetTagActive_N_Parms), &Z_Construct_UFunction_UELGaugeRoster_SetTagActive_N_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGaugeRoster_SetTagActive_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGaugeRoster_SetTagActive_N_Statics::NewProp_bActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGaugeRoster_SetTagActive_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGaugeRoster.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGaugeRoster_SetTagActive_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGaugeRoster, nullptr, "SetTagActive_N", nullptr, nullptr, sizeof(ELGaugeRoster_eventSetTagActive_N_Parms), Z_Construct_UFunction_UELGaugeRoster_SetTagActive_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGaugeRoster_SetTagActive_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGaugeRoster_SetTagActive_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGaugeRoster_SetTagActive_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGaugeRoster_SetTagActive_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGaugeRoster_SetTagActive_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELGaugeRoster_NoRegister()
	{
		return UELGaugeRoster::StaticClass();
	}
	struct Z_Construct_UClass_UELGaugeRoster_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELGaugeRoster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELGaugeRoster_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELGaugeRoster_SetNativeParam, "SetNativeParam" }, // 58821398
		{ &Z_Construct_UFunction_UELGaugeRoster_SetTagActive_N, "SetTagActive_N" }, // 882260510
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGaugeRoster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELGaugeRoster.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGaugeRoster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELGaugeRoster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELGaugeRoster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELGaugeRoster_Statics::ClassParams = {
		&UELGaugeRoster::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELGaugeRoster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELGaugeRoster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELGaugeRoster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELGaugeRoster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELGaugeRoster, 1343522770);
	template<> ABP_200508_API UClass* StaticClass<UELGaugeRoster>()
	{
		return UELGaugeRoster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELGaugeRoster(Z_Construct_UClass_UELGaugeRoster, &UELGaugeRoster::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELGaugeRoster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELGaugeRoster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
