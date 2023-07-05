// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSGimmickBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSGimmickBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGimmickBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGimmickBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActorCommonInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSGimmickBase::execOnActorLanded)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorLanded_Implementation(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGimmickBase::execOnActorLanding)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorLanding_Implementation(Z_Param_Actor);
		P_NATIVE_END;
	}
	static FName NAME_AELSSGimmickBase_OnActorLanded = FName(TEXT("OnActorLanded"));
	void AELSSGimmickBase::OnActorLanded(AActor* Actor)
	{
		ELSSGimmickBase_eventOnActorLanded_Parms Parms;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGimmickBase_OnActorLanded),&Parms);
	}
	static FName NAME_AELSSGimmickBase_OnActorLanding = FName(TEXT("OnActorLanding"));
	void AELSSGimmickBase::OnActorLanding(AActor* Actor)
	{
		ELSSGimmickBase_eventOnActorLanding_Parms Parms;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGimmickBase_OnActorLanding),&Parms);
	}
	void AELSSGimmickBase::StaticRegisterNativesAELSSGimmickBase()
	{
		UClass* Class = AELSSGimmickBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActorLanded", &AELSSGimmickBase::execOnActorLanded },
			{ "OnActorLanding", &AELSSGimmickBase::execOnActorLanding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSGimmickBase_OnActorLanded_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGimmickBase_OnActorLanded_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickBase_eventOnActorLanded_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGimmickBase_OnActorLanded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickBase_OnActorLanded_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickBase_OnActorLanded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGimmickBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGimmickBase_OnActorLanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGimmickBase, nullptr, "OnActorLanded", nullptr, nullptr, sizeof(ELSSGimmickBase_eventOnActorLanded_Parms), Z_Construct_UFunction_AELSSGimmickBase_OnActorLanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickBase_OnActorLanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickBase_OnActorLanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickBase_OnActorLanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGimmickBase_OnActorLanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGimmickBase_OnActorLanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGimmickBase_OnActorLanding_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGimmickBase_OnActorLanding_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickBase_eventOnActorLanding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGimmickBase_OnActorLanding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickBase_OnActorLanding_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickBase_OnActorLanding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGimmickBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGimmickBase_OnActorLanding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGimmickBase, nullptr, "OnActorLanding", nullptr, nullptr, sizeof(ELSSGimmickBase_eventOnActorLanding_Parms), Z_Construct_UFunction_AELSSGimmickBase_OnActorLanding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickBase_OnActorLanding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickBase_OnActorLanding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickBase_OnActorLanding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGimmickBase_OnActorLanding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGimmickBase_OnActorLanding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSGimmickBase_NoRegister()
	{
		return AELSSGimmickBase::StaticClass();
	}
	struct Z_Construct_UClass_AELSSGimmickBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSGimmickBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSGimmickBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSGimmickBase_OnActorLanded, "OnActorLanded" }, // 1563921594
		{ &Z_Construct_UFunction_AELSSGimmickBase_OnActorLanding, "OnActorLanding" }, // 2915598547
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSGimmickBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSGimmickBase.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSGimmickBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSActorCommonInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSGimmickBase, IELSSActorCommonInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSGimmickBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSGimmickBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSGimmickBase_Statics::ClassParams = {
		&AELSSGimmickBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSGimmickBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSGimmickBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSGimmickBase, 215000844);
	template<> ABP_200508_API UClass* StaticClass<AELSSGimmickBase>()
	{
		return AELSSGimmickBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSGimmickBase(Z_Construct_UClass_AELSSGimmickBase, &AELSSGimmickBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSGimmickBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSGimmickBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
