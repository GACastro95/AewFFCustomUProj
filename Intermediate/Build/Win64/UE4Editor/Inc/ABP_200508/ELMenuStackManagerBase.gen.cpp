// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMenuStackManagerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMenuStackManagerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELMenuStackManagerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELMenuStackManagerBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static FName NAME_AELMenuStackManagerBase_OnStartFade = FName(TEXT("OnStartFade"));
	void AELMenuStackManagerBase::OnStartFade(bool FadeIn, int32 TransitionType, float& Delay, float& DelayIn, float& DelayOut)
	{
		ELMenuStackManagerBase_eventOnStartFade_Parms Parms;
		Parms.FadeIn=FadeIn ? true : false;
		Parms.TransitionType=TransitionType;
		Parms.Delay=Delay;
		Parms.DelayIn=DelayIn;
		Parms.DelayOut=DelayOut;
		ProcessEvent(FindFunctionChecked(NAME_AELMenuStackManagerBase_OnStartFade),&Parms);
		Delay=Parms.Delay;
		DelayIn=Parms.DelayIn;
		DelayOut=Parms.DelayOut;
	}
	void AELMenuStackManagerBase::StaticRegisterNativesAELMenuStackManagerBase()
	{
	}
	struct Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics
	{
		static void NewProp_FadeIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FadeIn;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransitionType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayIn;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::NewProp_FadeIn_SetBit(void* Obj)
	{
		((ELMenuStackManagerBase_eventOnStartFade_Parms*)Obj)->FadeIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::NewProp_FadeIn = { "FadeIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuStackManagerBase_eventOnStartFade_Parms), &Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::NewProp_FadeIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::NewProp_TransitionType = { "TransitionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuStackManagerBase_eventOnStartFade_Parms, TransitionType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuStackManagerBase_eventOnStartFade_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::NewProp_DelayIn = { "DelayIn", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuStackManagerBase_eventOnStartFade_Parms, DelayIn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::NewProp_DelayOut = { "DelayOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuStackManagerBase_eventOnStartFade_Parms, DelayOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::NewProp_FadeIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::NewProp_TransitionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::NewProp_DelayIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::NewProp_DelayOut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuStackManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMenuStackManagerBase, nullptr, "OnStartFade", nullptr, nullptr, sizeof(ELMenuStackManagerBase_eventOnStartFade_Parms), Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELMenuStackManagerBase_NoRegister()
	{
		return AELMenuStackManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_AELMenuStackManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELMenuStackManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELMenuStackManagerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELMenuStackManagerBase_OnStartFade, "OnStartFade" }, // 2540988617
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMenuStackManagerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMenuStackManagerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMenuStackManagerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELMenuStackManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELMenuStackManagerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELMenuStackManagerBase_Statics::ClassParams = {
		&AELMenuStackManagerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELMenuStackManagerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELMenuStackManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELMenuStackManagerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELMenuStackManagerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELMenuStackManagerBase, 1300574907);
	template<> ABP_200508_API UClass* StaticClass<AELMenuStackManagerBase>()
	{
		return AELMenuStackManagerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELMenuStackManagerBase(Z_Construct_UClass_AELMenuStackManagerBase, &AELMenuStackManagerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELMenuStackManagerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELMenuStackManagerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
