// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSHottestPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSHottestPlayer() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSHottestPlayer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSHottestPlayer();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSCharacter();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerSetupParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerSetupParam();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActorCommonInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSHottestPlayer::execCreateWrestlerSetupParam)
	{
		P_GET_STRUCT_REF(FSSWrestlerSetupParam,Z_Param_Out_inSSWrestlerSetupParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWrestlerSetupParam*)Z_Param__Result=P_THIS->CreateWrestlerSetupParam(Z_Param_Out_inSSWrestlerSetupParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHottestPlayer::execGetCostumeID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCostumeID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHottestPlayer::execGetSSWrestlerSetupParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSSWrestlerSetupParam*)Z_Param__Result=P_THIS->GetSSWrestlerSetupParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSHottestPlayer::execPlayMotion)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_PlayMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->PlayMotion(Z_Param_PlayMontage);
		P_NATIVE_END;
	}
	void AELSSHottestPlayer::StaticRegisterNativesAELSSHottestPlayer()
	{
		UClass* Class = AELSSHottestPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateWrestlerSetupParam", &AELSSHottestPlayer::execCreateWrestlerSetupParam },
			{ "GetCostumeID", &AELSSHottestPlayer::execGetCostumeID },
			{ "GetSSWrestlerSetupParam", &AELSSHottestPlayer::execGetSSWrestlerSetupParam },
			{ "PlayMotion", &AELSSHottestPlayer::execPlayMotion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSHottestPlayer_CreateWrestlerSetupParam_Statics
	{
		struct ELSSHottestPlayer_eventCreateWrestlerSetupParam_Parms
		{
			FSSWrestlerSetupParam inSSWrestlerSetupParam;
			FWrestlerSetupParam ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inSSWrestlerSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inSSWrestlerSetupParam;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHottestPlayer_CreateWrestlerSetupParam_Statics::NewProp_inSSWrestlerSetupParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSHottestPlayer_CreateWrestlerSetupParam_Statics::NewProp_inSSWrestlerSetupParam = { "inSSWrestlerSetupParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHottestPlayer_eventCreateWrestlerSetupParam_Parms, inSSWrestlerSetupParam), Z_Construct_UScriptStruct_FSSWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSHottestPlayer_CreateWrestlerSetupParam_Statics::NewProp_inSSWrestlerSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHottestPlayer_CreateWrestlerSetupParam_Statics::NewProp_inSSWrestlerSetupParam_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSHottestPlayer_CreateWrestlerSetupParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHottestPlayer_eventCreateWrestlerSetupParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FWrestlerSetupParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHottestPlayer_CreateWrestlerSetupParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHottestPlayer_CreateWrestlerSetupParam_Statics::NewProp_inSSWrestlerSetupParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHottestPlayer_CreateWrestlerSetupParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHottestPlayer_CreateWrestlerSetupParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHottestPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHottestPlayer_CreateWrestlerSetupParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHottestPlayer, nullptr, "CreateWrestlerSetupParam", nullptr, nullptr, sizeof(ELSSHottestPlayer_eventCreateWrestlerSetupParam_Parms), Z_Construct_UFunction_AELSSHottestPlayer_CreateWrestlerSetupParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHottestPlayer_CreateWrestlerSetupParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHottestPlayer_CreateWrestlerSetupParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHottestPlayer_CreateWrestlerSetupParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHottestPlayer_CreateWrestlerSetupParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHottestPlayer_CreateWrestlerSetupParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHottestPlayer_GetCostumeID_Statics
	{
		struct ELSSHottestPlayer_eventGetCostumeID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSHottestPlayer_GetCostumeID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHottestPlayer_eventGetCostumeID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHottestPlayer_GetCostumeID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHottestPlayer_GetCostumeID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHottestPlayer_GetCostumeID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHottestPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHottestPlayer_GetCostumeID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHottestPlayer, nullptr, "GetCostumeID", nullptr, nullptr, sizeof(ELSSHottestPlayer_eventGetCostumeID_Parms), Z_Construct_UFunction_AELSSHottestPlayer_GetCostumeID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHottestPlayer_GetCostumeID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHottestPlayer_GetCostumeID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHottestPlayer_GetCostumeID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHottestPlayer_GetCostumeID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHottestPlayer_GetCostumeID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHottestPlayer_GetSSWrestlerSetupParam_Statics
	{
		struct ELSSHottestPlayer_eventGetSSWrestlerSetupParam_Parms
		{
			FSSWrestlerSetupParam ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSHottestPlayer_GetSSWrestlerSetupParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHottestPlayer_eventGetSSWrestlerSetupParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FSSWrestlerSetupParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHottestPlayer_GetSSWrestlerSetupParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHottestPlayer_GetSSWrestlerSetupParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHottestPlayer_GetSSWrestlerSetupParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHottestPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHottestPlayer_GetSSWrestlerSetupParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHottestPlayer, nullptr, "GetSSWrestlerSetupParam", nullptr, nullptr, sizeof(ELSSHottestPlayer_eventGetSSWrestlerSetupParam_Parms), Z_Construct_UFunction_AELSSHottestPlayer_GetSSWrestlerSetupParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHottestPlayer_GetSSWrestlerSetupParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHottestPlayer_GetSSWrestlerSetupParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHottestPlayer_GetSSWrestlerSetupParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHottestPlayer_GetSSWrestlerSetupParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHottestPlayer_GetSSWrestlerSetupParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSHottestPlayer_PlayMotion_Statics
	{
		struct ELSSHottestPlayer_eventPlayMotion_Parms
		{
			UAnimMontage* PlayMontage;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayMontage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSHottestPlayer_PlayMotion_Statics::NewProp_PlayMontage = { "PlayMontage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHottestPlayer_eventPlayMotion_Parms, PlayMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSHottestPlayer_PlayMotion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHottestPlayer_eventPlayMotion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSHottestPlayer_PlayMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHottestPlayer_PlayMotion_Statics::NewProp_PlayMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSHottestPlayer_PlayMotion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSHottestPlayer_PlayMotion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHottestPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSHottestPlayer_PlayMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSHottestPlayer, nullptr, "PlayMotion", nullptr, nullptr, sizeof(ELSSHottestPlayer_eventPlayMotion_Parms), Z_Construct_UFunction_AELSSHottestPlayer_PlayMotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHottestPlayer_PlayMotion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSHottestPlayer_PlayMotion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSHottestPlayer_PlayMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSHottestPlayer_PlayMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSHottestPlayer_PlayMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSHottestPlayer_NoRegister()
	{
		return AELSSHottestPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AELSSHottestPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSWrestlerSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SSWrestlerSetupParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CostumeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CostumeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSHottestPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSHottestPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSHottestPlayer_CreateWrestlerSetupParam, "CreateWrestlerSetupParam" }, // 341336799
		{ &Z_Construct_UFunction_AELSSHottestPlayer_GetCostumeID, "GetCostumeID" }, // 3858862036
		{ &Z_Construct_UFunction_AELSSHottestPlayer_GetSSWrestlerSetupParam, "GetSSWrestlerSetupParam" }, // 1652474614
		{ &Z_Construct_UFunction_AELSSHottestPlayer_PlayMotion, "PlayMotion" }, // 712633314
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHottestPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ELSSHottestPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSHottestPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHottestPlayer_Statics::NewProp_SSWrestlerSetupParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHottestPlayer" },
		{ "ModuleRelativePath", "Public/ELSSHottestPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSHottestPlayer_Statics::NewProp_SSWrestlerSetupParam = { "SSWrestlerSetupParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHottestPlayer, SSWrestlerSetupParam), Z_Construct_UScriptStruct_FSSWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UClass_AELSSHottestPlayer_Statics::NewProp_SSWrestlerSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHottestPlayer_Statics::NewProp_SSWrestlerSetupParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSHottestPlayer_Statics::NewProp_CostumeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHottestPlayer" },
		{ "ModuleRelativePath", "Public/ELSSHottestPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSHottestPlayer_Statics::NewProp_CostumeID = { "CostumeID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSHottestPlayer, CostumeID), METADATA_PARAMS(Z_Construct_UClass_AELSSHottestPlayer_Statics::NewProp_CostumeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHottestPlayer_Statics::NewProp_CostumeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSHottestPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHottestPlayer_Statics::NewProp_SSWrestlerSetupParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSHottestPlayer_Statics::NewProp_CostumeID,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSHottestPlayer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSActorCommonInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSHottestPlayer, IELSSActorCommonInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSHottestPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSHottestPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSHottestPlayer_Statics::ClassParams = {
		&AELSSHottestPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSHottestPlayer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHottestPlayer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSHottestPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSHottestPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSHottestPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSHottestPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSHottestPlayer, 364185434);
	template<> ABP_200508_API UClass* StaticClass<AELSSHottestPlayer>()
	{
		return AELSSHottestPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSHottestPlayer(Z_Construct_UClass_AELSSHottestPlayer, &AELSSHottestPlayer::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSHottestPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSHottestPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
