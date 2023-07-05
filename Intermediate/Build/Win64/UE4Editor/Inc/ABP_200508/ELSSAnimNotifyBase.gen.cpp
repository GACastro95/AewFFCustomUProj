// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSAnimNotifyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSAnimNotifyBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotifyBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotifyBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStateBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSAnimNotifyBase::execGetOwnerPlayer)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_inMeshComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayer**)Z_Param__Result=P_THIS->GetOwnerPlayer(Z_Param_inMeshComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSAnimNotifyBase::execGetOwnerPlayerState)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_inMeshComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSActionStateBase**)Z_Param__Result=P_THIS->GetOwnerPlayerState(Z_Param_inMeshComp);
		P_NATIVE_END;
	}
	void UELSSAnimNotifyBase::StaticRegisterNativesUELSSAnimNotifyBase()
	{
		UClass* Class = UELSSAnimNotifyBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwnerPlayer", &UELSSAnimNotifyBase::execGetOwnerPlayer },
			{ "GetOwnerPlayerState", &UELSSAnimNotifyBase::execGetOwnerPlayerState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayer_Statics
	{
		struct ELSSAnimNotifyBase_eventGetOwnerPlayer_Parms
		{
			USkeletalMeshComponent* inMeshComp;
			AELSSPlayer* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMeshComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayer_Statics::NewProp_inMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayer_Statics::NewProp_inMeshComp = { "inMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAnimNotifyBase_eventGetOwnerPlayer_Parms, inMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayer_Statics::NewProp_inMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayer_Statics::NewProp_inMeshComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAnimNotifyBase_eventGetOwnerPlayer_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayer_Statics::NewProp_inMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAnimNotifyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAnimNotifyBase, nullptr, "GetOwnerPlayer", nullptr, nullptr, sizeof(ELSSAnimNotifyBase_eventGetOwnerPlayer_Parms), Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayerState_Statics
	{
		struct ELSSAnimNotifyBase_eventGetOwnerPlayerState_Parms
		{
			USkeletalMeshComponent* inMeshComp;
			UELSSActionStateBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMeshComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayerState_Statics::NewProp_inMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayerState_Statics::NewProp_inMeshComp = { "inMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAnimNotifyBase_eventGetOwnerPlayerState_Parms, inMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayerState_Statics::NewProp_inMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayerState_Statics::NewProp_inMeshComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAnimNotifyBase_eventGetOwnerPlayerState_Parms, ReturnValue), Z_Construct_UClass_UELSSActionStateBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayerState_Statics::NewProp_inMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAnimNotifyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAnimNotifyBase, nullptr, "GetOwnerPlayerState", nullptr, nullptr, sizeof(ELSSAnimNotifyBase_eventGetOwnerPlayerState_Parms), Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSAnimNotifyBase_NoRegister()
	{
		return UELSSAnimNotifyBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSSAnimNotifyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSAnimNotifyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSAnimNotifyBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayer, "GetOwnerPlayer" }, // 1107619500
		{ &Z_Construct_UFunction_UELSSAnimNotifyBase_GetOwnerPlayerState, "GetOwnerPlayerState" }, // 3760864238
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotifyBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELSSAnimNotifyBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotifyBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSAnimNotifyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSAnimNotifyBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSAnimNotifyBase_Statics::ClassParams = {
		&UELSSAnimNotifyBase::StaticClass,
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
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotifyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotifyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSAnimNotifyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSAnimNotifyBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSAnimNotifyBase, 583712307);
	template<> ABP_200508_API UClass* StaticClass<UELSSAnimNotifyBase>()
	{
		return UELSSAnimNotifyBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSAnimNotifyBase(Z_Construct_UClass_UELSSAnimNotifyBase, &UELSSAnimNotifyBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSAnimNotifyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSAnimNotifyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
