// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSSilhouetteActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSSilhouetteActor() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSSilhouetteActor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSSilhouetteActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
// End Cross Module References
	static FName NAME_AELSSSilhouetteActor_SetTargetPlayer = FName(TEXT("SetTargetPlayer"));
	void AELSSSilhouetteActor::SetTargetPlayer(AELSSPlayer* inTargetPlayer)
	{
		ELSSSilhouetteActor_eventSetTargetPlayer_Parms Parms;
		Parms.inTargetPlayer=inTargetPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AELSSSilhouetteActor_SetTargetPlayer),&Parms);
	}
	static FName NAME_AELSSSilhouetteActor_UpdatePose = FName(TEXT("UpdatePose"));
	bool AELSSSilhouetteActor::UpdatePose()
	{
		ELSSSilhouetteActor_eventUpdatePose_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELSSSilhouetteActor_UpdatePose),&Parms);
		return !!Parms.ReturnValue;
	}
	void AELSSSilhouetteActor::StaticRegisterNativesAELSSSilhouetteActor()
	{
	}
	struct Z_Construct_UFunction_AELSSSilhouetteActor_SetTargetPlayer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inTargetPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSilhouetteActor_SetTargetPlayer_Statics::NewProp_inTargetPlayer = { "inTargetPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSilhouetteActor_eventSetTargetPlayer_Parms, inTargetPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSilhouetteActor_SetTargetPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSilhouetteActor_SetTargetPlayer_Statics::NewProp_inTargetPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSilhouetteActor_SetTargetPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSilhouetteActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSilhouetteActor_SetTargetPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSilhouetteActor, nullptr, "SetTargetPlayer", nullptr, nullptr, sizeof(ELSSSilhouetteActor_eventSetTargetPlayer_Parms), Z_Construct_UFunction_AELSSSilhouetteActor_SetTargetPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSilhouetteActor_SetTargetPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSilhouetteActor_SetTargetPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSilhouetteActor_SetTargetPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSilhouetteActor_SetTargetPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSilhouetteActor_SetTargetPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSilhouetteActor_UpdatePose_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSSilhouetteActor_UpdatePose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSSilhouetteActor_eventUpdatePose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSSilhouetteActor_UpdatePose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSSilhouetteActor_eventUpdatePose_Parms), &Z_Construct_UFunction_AELSSSilhouetteActor_UpdatePose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSilhouetteActor_UpdatePose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSilhouetteActor_UpdatePose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSilhouetteActor_UpdatePose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSilhouetteActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSilhouetteActor_UpdatePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSilhouetteActor, nullptr, "UpdatePose", nullptr, nullptr, sizeof(ELSSSilhouetteActor_eventUpdatePose_Parms), Z_Construct_UFunction_AELSSSilhouetteActor_UpdatePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSilhouetteActor_UpdatePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSilhouetteActor_UpdatePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSilhouetteActor_UpdatePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSilhouetteActor_UpdatePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSilhouetteActor_UpdatePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSSilhouetteActor_NoRegister()
	{
		return AELSSSilhouetteActor::StaticClass();
	}
	struct Z_Construct_UClass_AELSSSilhouetteActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSSilhouetteActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSSilhouetteActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSSilhouetteActor_SetTargetPlayer, "SetTargetPlayer" }, // 801690252
		{ &Z_Construct_UFunction_AELSSSilhouetteActor_UpdatePose, "UpdatePose" }, // 606250552
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSilhouetteActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSSilhouetteActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSSilhouetteActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSilhouetteActor_Statics::NewProp_TargetPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSilhouetteActor" },
		{ "ModuleRelativePath", "Public/ELSSSilhouetteActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSSilhouetteActor_Statics::NewProp_TargetPlayer = { "TargetPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSilhouetteActor, TargetPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSSilhouetteActor_Statics::NewProp_TargetPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSilhouetteActor_Statics::NewProp_TargetPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSSilhouetteActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSilhouetteActor_Statics::NewProp_TargetPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSSilhouetteActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSSilhouetteActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSSilhouetteActor_Statics::ClassParams = {
		&AELSSSilhouetteActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSSilhouetteActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSilhouetteActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSSilhouetteActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSilhouetteActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSSilhouetteActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSSilhouetteActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSSilhouetteActor, 3193927475);
	template<> ABP_200508_API UClass* StaticClass<AELSSSilhouetteActor>()
	{
		return AELSSSilhouetteActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSSilhouetteActor(Z_Construct_UClass_AELSSSilhouetteActor, &AELSSSilhouetteActor::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSSilhouetteActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSSilhouetteActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
