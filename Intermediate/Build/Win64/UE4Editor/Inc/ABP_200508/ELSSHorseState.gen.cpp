// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSHorseState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSHorseState() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSHorseState_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSHorseState();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSDrivingState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSHorseState::execIsPlayingDamageMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingDamageMontage();
		P_NATIVE_END;
	}
	void UELSSHorseState::StaticRegisterNativesUELSSHorseState()
	{
		UClass* Class = UELSSHorseState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPlayingDamageMontage", &UELSSHorseState::execIsPlayingDamageMontage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSHorseState_IsPlayingDamageMontage_Statics
	{
		struct ELSSHorseState_eventIsPlayingDamageMontage_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSHorseState_IsPlayingDamageMontage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSHorseState_eventIsPlayingDamageMontage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSHorseState_IsPlayingDamageMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorseState_eventIsPlayingDamageMontage_Parms), &Z_Construct_UFunction_UELSSHorseState_IsPlayingDamageMontage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSHorseState_IsPlayingDamageMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSHorseState_IsPlayingDamageMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSHorseState_IsPlayingDamageMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorseState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSHorseState_IsPlayingDamageMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSHorseState, nullptr, "IsPlayingDamageMontage", nullptr, nullptr, sizeof(ELSSHorseState_eventIsPlayingDamageMontage_Parms), Z_Construct_UFunction_UELSSHorseState_IsPlayingDamageMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSHorseState_IsPlayingDamageMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSHorseState_IsPlayingDamageMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSHorseState_IsPlayingDamageMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSHorseState_IsPlayingDamageMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSHorseState_IsPlayingDamageMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSHorseState_NoRegister()
	{
		return UELSSHorseState::StaticClass();
	}
	struct Z_Construct_UClass_UELSSHorseState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleAnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleAnimSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageDamageL_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageDamageL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageDamageR_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageDamageR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageDamageB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageDamageB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSHorseState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSDrivingState,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSHorseState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSHorseState_IsPlayingDamageMontage, "IsPlayingDamageMontage" }, // 2556400744
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSHorseState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSHorseState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseState_Statics::NewProp_IdleAnimSequence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseState" },
		{ "ModuleRelativePath", "Public/ELSSHorseState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSHorseState_Statics::NewProp_IdleAnimSequence = { "IdleAnimSequence", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseState, IdleAnimSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSHorseState_Statics::NewProp_IdleAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseState_Statics::NewProp_IdleAnimSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseState_Statics::NewProp_MontageDamageL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseState" },
		{ "ModuleRelativePath", "Public/ELSSHorseState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSHorseState_Statics::NewProp_MontageDamageL = { "MontageDamageL", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseState, MontageDamageL), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSHorseState_Statics::NewProp_MontageDamageL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseState_Statics::NewProp_MontageDamageL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseState_Statics::NewProp_MontageDamageR_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseState" },
		{ "ModuleRelativePath", "Public/ELSSHorseState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSHorseState_Statics::NewProp_MontageDamageR = { "MontageDamageR", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseState, MontageDamageR), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSHorseState_Statics::NewProp_MontageDamageR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseState_Statics::NewProp_MontageDamageR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseState_Statics::NewProp_MontageDamageB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseState" },
		{ "ModuleRelativePath", "Public/ELSSHorseState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSHorseState_Statics::NewProp_MontageDamageB = { "MontageDamageB", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseState, MontageDamageB), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSHorseState_Statics::NewProp_MontageDamageB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseState_Statics::NewProp_MontageDamageB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSHorseState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseState_Statics::NewProp_IdleAnimSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseState_Statics::NewProp_MontageDamageL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseState_Statics::NewProp_MontageDamageR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseState_Statics::NewProp_MontageDamageB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSHorseState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSHorseState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSHorseState_Statics::ClassParams = {
		&UELSSHorseState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSHorseState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseState_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSHorseState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSHorseState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSHorseState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSHorseState, 2271438360);
	template<> ABP_200508_API UClass* StaticClass<UELSSHorseState>()
	{
		return UELSSHorseState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSHorseState(Z_Construct_UClass_UELSSHorseState, &UELSSHorseState::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSHorseState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSHorseState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
