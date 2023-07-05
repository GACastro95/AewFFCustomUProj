// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSAnimNotifyStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSAnimNotifyStateBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotifyStateBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnimNotifyStateBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSAnimNotifyStateBase::execGetOwnerPlayer)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_inMeshComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayer**)Z_Param__Result=P_THIS->GetOwnerPlayer(Z_Param_inMeshComp);
		P_NATIVE_END;
	}
	void UELSSAnimNotifyStateBase::StaticRegisterNativesUELSSAnimNotifyStateBase()
	{
		UClass* Class = UELSSAnimNotifyStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwnerPlayer", &UELSSAnimNotifyStateBase::execGetOwnerPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSAnimNotifyStateBase_GetOwnerPlayer_Statics
	{
		struct ELSSAnimNotifyStateBase_eventGetOwnerPlayer_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimNotifyStateBase_GetOwnerPlayer_Statics::NewProp_inMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAnimNotifyStateBase_GetOwnerPlayer_Statics::NewProp_inMeshComp = { "inMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAnimNotifyStateBase_eventGetOwnerPlayer_Parms, inMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimNotifyStateBase_GetOwnerPlayer_Statics::NewProp_inMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotifyStateBase_GetOwnerPlayer_Statics::NewProp_inMeshComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSAnimNotifyStateBase_GetOwnerPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSAnimNotifyStateBase_eventGetOwnerPlayer_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSAnimNotifyStateBase_GetOwnerPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimNotifyStateBase_GetOwnerPlayer_Statics::NewProp_inMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSAnimNotifyStateBase_GetOwnerPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSAnimNotifyStateBase_GetOwnerPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSAnimNotifyStateBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSAnimNotifyStateBase_GetOwnerPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSAnimNotifyStateBase, nullptr, "GetOwnerPlayer", nullptr, nullptr, sizeof(ELSSAnimNotifyStateBase_eventGetOwnerPlayer_Parms), Z_Construct_UFunction_UELSSAnimNotifyStateBase_GetOwnerPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotifyStateBase_GetOwnerPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSAnimNotifyStateBase_GetOwnerPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSAnimNotifyStateBase_GetOwnerPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSAnimNotifyStateBase_GetOwnerPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSAnimNotifyStateBase_GetOwnerPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSAnimNotifyStateBase_NoRegister()
	{
		return UELSSAnimNotifyStateBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSSAnimNotifyStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSAnimNotifyStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSAnimNotifyStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSAnimNotifyStateBase_GetOwnerPlayer, "GetOwnerPlayer" }, // 397575753
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnimNotifyStateBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELSSAnimNotifyStateBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSAnimNotifyStateBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSAnimNotifyStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSAnimNotifyStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSAnimNotifyStateBase_Statics::ClassParams = {
		&UELSSAnimNotifyStateBase::StaticClass,
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
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSAnimNotifyStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnimNotifyStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSAnimNotifyStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSAnimNotifyStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSAnimNotifyStateBase, 2581773315);
	template<> ABP_200508_API UClass* StaticClass<UELSSAnimNotifyStateBase>()
	{
		return UELSSAnimNotifyStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSAnimNotifyStateBase(Z_Construct_UClass_UELSSAnimNotifyStateBase, &UELSSAnimNotifyStateBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSAnimNotifyStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSAnimNotifyStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
