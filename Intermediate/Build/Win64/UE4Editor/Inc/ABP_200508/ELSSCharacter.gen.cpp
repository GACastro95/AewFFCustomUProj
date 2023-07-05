// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSCharacter() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSCharacter_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EEditPartsSlot();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerSetupParam();
	CREATION_API UClass* Z_Construct_UClass_UELBuildBody_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UClass* Z_Construct_UClass_UCharacterProfilesBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSCharacter::execApplySourceMeshMaterials)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_inMergedMesh);
		P_GET_ENUM(EEditPartsSlot,Z_Param_Slot);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_inSrcMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplySourceMeshMaterials(Z_Param_inMergedMesh,EEditPartsSlot(Z_Param_Slot),Z_Param_inSrcMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSCharacter::execGetActiveMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetActiveMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSCharacter::execGetWrestlerProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELWrestlerProfile*)Z_Param__Result=P_THIS->GetWrestlerProfile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSCharacter::execMergeMeshes)
	{
		P_GET_TARRAY(USkeletalMesh*,Z_Param_inMeshesToMerge);
		P_GET_TARRAY(USkeletalMeshComponent*,Z_Param_inMeshCompsToMerge);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->MergeMeshes(Z_Param_inMeshesToMerge,Z_Param_inMeshCompsToMerge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSCharacter::execPlayMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_inMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMontage(Z_Param_inMontage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSCharacter::execReductionBodyMaterial)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_inBodyMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReductionBodyMaterial(Z_Param_inBodyMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSCharacter::execSetEnableVisibleMergedMesh)
	{
		P_GET_UBOOL(Z_Param_flg);
		P_GET_UBOOL(Z_Param_Force);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableVisibleMergedMesh(Z_Param_flg,Z_Param_Force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSCharacter::execSetExtraMeshes)
	{
		P_GET_TARRAY(USkeletalMeshComponent*,Z_Param_inExtraMeshes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExtraMeshes(Z_Param_inExtraMeshes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSCharacter::execSetHairMesh)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_inHairMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHairMesh(Z_Param_inHairMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSCharacter::execSetInsignificateMeshes)
	{
		P_GET_TARRAY(USkeletalMeshComponent*,Z_Param_inMeshes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInsignificateMeshes(Z_Param_inMeshes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSCharacter::execSetSpawnedMeshChara)
	{
		P_GET_OBJECT(ACharacter,Z_Param_inChara);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpawnedMeshChara(Z_Param_inChara);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSCharacter::execSetSrcMeshComponentsToMerge)
	{
		P_GET_TARRAY(USkeletalMeshComponent*,Z_Param_inSrcMeshCompsToMerge);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSrcMeshComponentsToMerge(Z_Param_inSrcMeshCompsToMerge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSCharacter::execSetWrestlerProfile)
	{
		P_GET_STRUCT_REF(FELWrestlerProfile,Z_Param_Out_InWrestlerProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWrestlerProfile(Z_Param_Out_InWrestlerProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSCharacter::execShouldPlayFootstepSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldPlayFootstepSound();
		P_NATIVE_END;
	}
	static FName NAME_AELSSCharacter_GetVoiceId = FName(TEXT("GetVoiceId"));
	int32 AELSSCharacter::GetVoiceId() const
	{
		ELSSCharacter_eventGetVoiceId_Parms Parms;
		const_cast<AELSSCharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSCharacter_GetVoiceId),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSCharacter_SetupCharacterMesh = FName(TEXT("SetupCharacterMesh"));
	void AELSSCharacter::SetupCharacterMesh(EWrestlerID_N inWrestlerId, FSSWrestlerSetupParam const& inWrestlerSetupParam)
	{
		ELSSCharacter_eventSetupCharacterMesh_Parms Parms;
		Parms.inWrestlerId=inWrestlerId;
		Parms.inWrestlerSetupParam=inWrestlerSetupParam;
		ProcessEvent(FindFunctionChecked(NAME_AELSSCharacter_SetupCharacterMesh),&Parms);
	}
	void AELSSCharacter::StaticRegisterNativesAELSSCharacter()
	{
		UClass* Class = AELSSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplySourceMeshMaterials", &AELSSCharacter::execApplySourceMeshMaterials },
			{ "GetActiveMontage", &AELSSCharacter::execGetActiveMontage },
			{ "GetWrestlerProfile", &AELSSCharacter::execGetWrestlerProfile },
			{ "MergeMeshes", &AELSSCharacter::execMergeMeshes },
			{ "PlayMontage", &AELSSCharacter::execPlayMontage },
			{ "ReductionBodyMaterial", &AELSSCharacter::execReductionBodyMaterial },
			{ "SetEnableVisibleMergedMesh", &AELSSCharacter::execSetEnableVisibleMergedMesh },
			{ "SetExtraMeshes", &AELSSCharacter::execSetExtraMeshes },
			{ "SetHairMesh", &AELSSCharacter::execSetHairMesh },
			{ "SetInsignificateMeshes", &AELSSCharacter::execSetInsignificateMeshes },
			{ "SetSpawnedMeshChara", &AELSSCharacter::execSetSpawnedMeshChara },
			{ "SetSrcMeshComponentsToMerge", &AELSSCharacter::execSetSrcMeshComponentsToMerge },
			{ "SetWrestlerProfile", &AELSSCharacter::execSetWrestlerProfile },
			{ "ShouldPlayFootstepSound", &AELSSCharacter::execShouldPlayFootstepSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics
	{
		struct ELSSCharacter_eventApplySourceMeshMaterials_Parms
		{
			USkeletalMeshComponent* inMergedMesh;
			EEditPartsSlot Slot;
			USkeletalMeshComponent* inSrcMesh;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMergedMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMergedMesh;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inSrcMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inSrcMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::NewProp_inMergedMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::NewProp_inMergedMesh = { "inMergedMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventApplySourceMeshMaterials_Parms, inMergedMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::NewProp_inMergedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::NewProp_inMergedMesh_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventApplySourceMeshMaterials_Parms, Slot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::NewProp_Slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::NewProp_inSrcMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::NewProp_inSrcMesh = { "inSrcMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventApplySourceMeshMaterials_Parms, inSrcMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::NewProp_inSrcMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::NewProp_inSrcMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::NewProp_inMergedMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::NewProp_Slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::NewProp_inSrcMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSCharacter, nullptr, "ApplySourceMeshMaterials", nullptr, nullptr, sizeof(ELSSCharacter_eventApplySourceMeshMaterials_Parms), Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSCharacter_GetActiveMontage_Statics
	{
		struct ELSSCharacter_eventGetActiveMontage_Parms
		{
			UAnimMontage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSCharacter_GetActiveMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventGetActiveMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSCharacter_GetActiveMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_GetActiveMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_GetActiveMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSCharacter_GetActiveMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSCharacter, nullptr, "GetActiveMontage", nullptr, nullptr, sizeof(ELSSCharacter_eventGetActiveMontage_Parms), Z_Construct_UFunction_AELSSCharacter_GetActiveMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_GetActiveMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_GetActiveMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_GetActiveMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSCharacter_GetActiveMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSCharacter_GetActiveMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSCharacter_GetVoiceId_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSCharacter_GetVoiceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventGetVoiceId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSCharacter_GetVoiceId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_GetVoiceId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_GetVoiceId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSCharacter_GetVoiceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSCharacter, nullptr, "GetVoiceId", nullptr, nullptr, sizeof(ELSSCharacter_eventGetVoiceId_Parms), Z_Construct_UFunction_AELSSCharacter_GetVoiceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_GetVoiceId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_GetVoiceId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_GetVoiceId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSCharacter_GetVoiceId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSCharacter_GetVoiceId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSCharacter_GetWrestlerProfile_Statics
	{
		struct ELSSCharacter_eventGetWrestlerProfile_Parms
		{
			FELWrestlerProfile ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSCharacter_GetWrestlerProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventGetWrestlerProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FELWrestlerProfile, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSCharacter_GetWrestlerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_GetWrestlerProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_GetWrestlerProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSCharacter_GetWrestlerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSCharacter, nullptr, "GetWrestlerProfile", nullptr, nullptr, sizeof(ELSSCharacter_eventGetWrestlerProfile_Parms), Z_Construct_UFunction_AELSSCharacter_GetWrestlerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_GetWrestlerProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_GetWrestlerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_GetWrestlerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSCharacter_GetWrestlerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSCharacter_GetWrestlerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics
	{
		struct ELSSCharacter_eventMergeMeshes_Parms
		{
			TArray<USkeletalMesh*> inMeshesToMerge;
			TArray<USkeletalMeshComponent*> inMeshCompsToMerge;
			USkeletalMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMeshesToMerge_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inMeshesToMerge;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMeshCompsToMerge_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMeshCompsToMerge_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inMeshCompsToMerge;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::NewProp_inMeshesToMerge_Inner = { "inMeshesToMerge", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::NewProp_inMeshesToMerge = { "inMeshesToMerge", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventMergeMeshes_Parms, inMeshesToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::NewProp_inMeshCompsToMerge_Inner = { "inMeshCompsToMerge", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::NewProp_inMeshCompsToMerge_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::NewProp_inMeshCompsToMerge = { "inMeshCompsToMerge", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventMergeMeshes_Parms, inMeshCompsToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::NewProp_inMeshCompsToMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::NewProp_inMeshCompsToMerge_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventMergeMeshes_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::NewProp_inMeshesToMerge_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::NewProp_inMeshesToMerge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::NewProp_inMeshCompsToMerge_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::NewProp_inMeshCompsToMerge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSCharacter, nullptr, "MergeMeshes", nullptr, nullptr, sizeof(ELSSCharacter_eventMergeMeshes_Parms), Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSCharacter_MergeMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSCharacter_MergeMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSCharacter_PlayMontage_Statics
	{
		struct ELSSCharacter_eventPlayMontage_Parms
		{
			UAnimMontage* inMontage;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSCharacter_PlayMontage_Statics::NewProp_inMontage = { "inMontage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventPlayMontage_Parms, inMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSCharacter_PlayMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_PlayMontage_Statics::NewProp_inMontage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_PlayMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSCharacter_PlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSCharacter, nullptr, "PlayMontage", nullptr, nullptr, sizeof(ELSSCharacter_eventPlayMontage_Parms), Z_Construct_UFunction_AELSSCharacter_PlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_PlayMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_PlayMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_PlayMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSCharacter_PlayMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSCharacter_PlayMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSCharacter_ReductionBodyMaterial_Statics
	{
		struct ELSSCharacter_eventReductionBodyMaterial_Parms
		{
			USkeletalMeshComponent* inBodyMesh;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inBodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inBodyMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_ReductionBodyMaterial_Statics::NewProp_inBodyMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSCharacter_ReductionBodyMaterial_Statics::NewProp_inBodyMesh = { "inBodyMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventReductionBodyMaterial_Parms, inBodyMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_ReductionBodyMaterial_Statics::NewProp_inBodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_ReductionBodyMaterial_Statics::NewProp_inBodyMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSCharacter_ReductionBodyMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_ReductionBodyMaterial_Statics::NewProp_inBodyMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_ReductionBodyMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSCharacter_ReductionBodyMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSCharacter, nullptr, "ReductionBodyMaterial", nullptr, nullptr, sizeof(ELSSCharacter_eventReductionBodyMaterial_Parms), Z_Construct_UFunction_AELSSCharacter_ReductionBodyMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_ReductionBodyMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_ReductionBodyMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_ReductionBodyMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSCharacter_ReductionBodyMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSCharacter_ReductionBodyMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh_Statics
	{
		struct ELSSCharacter_eventSetEnableVisibleMergedMesh_Parms
		{
			bool flg;
			bool Force;
		};
		static void NewProp_flg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flg;
		static void NewProp_Force_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh_Statics::NewProp_flg_SetBit(void* Obj)
	{
		((ELSSCharacter_eventSetEnableVisibleMergedMesh_Parms*)Obj)->flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh_Statics::NewProp_flg = { "flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCharacter_eventSetEnableVisibleMergedMesh_Parms), &Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh_Statics::NewProp_flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh_Statics::NewProp_Force_SetBit(void* Obj)
	{
		((ELSSCharacter_eventSetEnableVisibleMergedMesh_Parms*)Obj)->Force = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCharacter_eventSetEnableVisibleMergedMesh_Parms), &Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh_Statics::NewProp_Force_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh_Statics::NewProp_flg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh_Statics::NewProp_Force,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSCharacter, nullptr, "SetEnableVisibleMergedMesh", nullptr, nullptr, sizeof(ELSSCharacter_eventSetEnableVisibleMergedMesh_Parms), Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSCharacter_SetExtraMeshes_Statics
	{
		struct ELSSCharacter_eventSetExtraMeshes_Parms
		{
			TArray<USkeletalMeshComponent*> inExtraMeshes;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inExtraMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inExtraMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inExtraMeshes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSCharacter_SetExtraMeshes_Statics::NewProp_inExtraMeshes_Inner = { "inExtraMeshes", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_SetExtraMeshes_Statics::NewProp_inExtraMeshes_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELSSCharacter_SetExtraMeshes_Statics::NewProp_inExtraMeshes = { "inExtraMeshes", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventSetExtraMeshes_Parms, inExtraMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_SetExtraMeshes_Statics::NewProp_inExtraMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetExtraMeshes_Statics::NewProp_inExtraMeshes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSCharacter_SetExtraMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_SetExtraMeshes_Statics::NewProp_inExtraMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_SetExtraMeshes_Statics::NewProp_inExtraMeshes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_SetExtraMeshes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSCharacter_SetExtraMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSCharacter, nullptr, "SetExtraMeshes", nullptr, nullptr, sizeof(ELSSCharacter_eventSetExtraMeshes_Parms), Z_Construct_UFunction_AELSSCharacter_SetExtraMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetExtraMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_SetExtraMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetExtraMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSCharacter_SetExtraMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSCharacter_SetExtraMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSCharacter_SetHairMesh_Statics
	{
		struct ELSSCharacter_eventSetHairMesh_Parms
		{
			USkeletalMeshComponent* inHairMesh;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inHairMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inHairMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_SetHairMesh_Statics::NewProp_inHairMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSCharacter_SetHairMesh_Statics::NewProp_inHairMesh = { "inHairMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventSetHairMesh_Parms, inHairMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_SetHairMesh_Statics::NewProp_inHairMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetHairMesh_Statics::NewProp_inHairMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSCharacter_SetHairMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_SetHairMesh_Statics::NewProp_inHairMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_SetHairMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSCharacter_SetHairMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSCharacter, nullptr, "SetHairMesh", nullptr, nullptr, sizeof(ELSSCharacter_eventSetHairMesh_Parms), Z_Construct_UFunction_AELSSCharacter_SetHairMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetHairMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_SetHairMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetHairMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSCharacter_SetHairMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSCharacter_SetHairMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSCharacter_SetInsignificateMeshes_Statics
	{
		struct ELSSCharacter_eventSetInsignificateMeshes_Parms
		{
			TArray<USkeletalMeshComponent*> inMeshes;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inMeshes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSCharacter_SetInsignificateMeshes_Statics::NewProp_inMeshes_Inner = { "inMeshes", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_SetInsignificateMeshes_Statics::NewProp_inMeshes_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELSSCharacter_SetInsignificateMeshes_Statics::NewProp_inMeshes = { "inMeshes", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventSetInsignificateMeshes_Parms, inMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_SetInsignificateMeshes_Statics::NewProp_inMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetInsignificateMeshes_Statics::NewProp_inMeshes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSCharacter_SetInsignificateMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_SetInsignificateMeshes_Statics::NewProp_inMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_SetInsignificateMeshes_Statics::NewProp_inMeshes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_SetInsignificateMeshes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSCharacter_SetInsignificateMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSCharacter, nullptr, "SetInsignificateMeshes", nullptr, nullptr, sizeof(ELSSCharacter_eventSetInsignificateMeshes_Parms), Z_Construct_UFunction_AELSSCharacter_SetInsignificateMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetInsignificateMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_SetInsignificateMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetInsignificateMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSCharacter_SetInsignificateMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSCharacter_SetInsignificateMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSCharacter_SetSpawnedMeshChara_Statics
	{
		struct ELSSCharacter_eventSetSpawnedMeshChara_Parms
		{
			ACharacter* inChara;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inChara;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSCharacter_SetSpawnedMeshChara_Statics::NewProp_inChara = { "inChara", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventSetSpawnedMeshChara_Parms, inChara), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSCharacter_SetSpawnedMeshChara_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_SetSpawnedMeshChara_Statics::NewProp_inChara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_SetSpawnedMeshChara_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSCharacter_SetSpawnedMeshChara_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSCharacter, nullptr, "SetSpawnedMeshChara", nullptr, nullptr, sizeof(ELSSCharacter_eventSetSpawnedMeshChara_Parms), Z_Construct_UFunction_AELSSCharacter_SetSpawnedMeshChara_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetSpawnedMeshChara_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_SetSpawnedMeshChara_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetSpawnedMeshChara_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSCharacter_SetSpawnedMeshChara()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSCharacter_SetSpawnedMeshChara_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSCharacter_SetSrcMeshComponentsToMerge_Statics
	{
		struct ELSSCharacter_eventSetSrcMeshComponentsToMerge_Parms
		{
			TArray<USkeletalMeshComponent*> inSrcMeshCompsToMerge;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inSrcMeshCompsToMerge_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inSrcMeshCompsToMerge_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inSrcMeshCompsToMerge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSCharacter_SetSrcMeshComponentsToMerge_Statics::NewProp_inSrcMeshCompsToMerge_Inner = { "inSrcMeshCompsToMerge", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_SetSrcMeshComponentsToMerge_Statics::NewProp_inSrcMeshCompsToMerge_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELSSCharacter_SetSrcMeshComponentsToMerge_Statics::NewProp_inSrcMeshCompsToMerge = { "inSrcMeshCompsToMerge", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventSetSrcMeshComponentsToMerge_Parms, inSrcMeshCompsToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_SetSrcMeshComponentsToMerge_Statics::NewProp_inSrcMeshCompsToMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetSrcMeshComponentsToMerge_Statics::NewProp_inSrcMeshCompsToMerge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSCharacter_SetSrcMeshComponentsToMerge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_SetSrcMeshComponentsToMerge_Statics::NewProp_inSrcMeshCompsToMerge_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_SetSrcMeshComponentsToMerge_Statics::NewProp_inSrcMeshCompsToMerge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_SetSrcMeshComponentsToMerge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSCharacter_SetSrcMeshComponentsToMerge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSCharacter, nullptr, "SetSrcMeshComponentsToMerge", nullptr, nullptr, sizeof(ELSSCharacter_eventSetSrcMeshComponentsToMerge_Parms), Z_Construct_UFunction_AELSSCharacter_SetSrcMeshComponentsToMerge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetSrcMeshComponentsToMerge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_SetSrcMeshComponentsToMerge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetSrcMeshComponentsToMerge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSCharacter_SetSrcMeshComponentsToMerge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSCharacter_SetSrcMeshComponentsToMerge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inWrestlerId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inWrestlerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inWrestlerSetupParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inWrestlerSetupParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh_Statics::NewProp_inWrestlerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh_Statics::NewProp_inWrestlerId = { "inWrestlerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventSetupCharacterMesh_Parms, inWrestlerId), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh_Statics::NewProp_inWrestlerSetupParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh_Statics::NewProp_inWrestlerSetupParam = { "inWrestlerSetupParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventSetupCharacterMesh_Parms, inWrestlerSetupParam), Z_Construct_UScriptStruct_FSSWrestlerSetupParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh_Statics::NewProp_inWrestlerSetupParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh_Statics::NewProp_inWrestlerSetupParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh_Statics::NewProp_inWrestlerId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh_Statics::NewProp_inWrestlerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh_Statics::NewProp_inWrestlerSetupParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSCharacter, nullptr, "SetupCharacterMesh", nullptr, nullptr, sizeof(ELSSCharacter_eventSetupCharacterMesh_Parms), Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSCharacter_SetWrestlerProfile_Statics
	{
		struct ELSSCharacter_eventSetWrestlerProfile_Parms
		{
			FELWrestlerProfile InWrestlerProfile;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWrestlerProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWrestlerProfile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_SetWrestlerProfile_Statics::NewProp_InWrestlerProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSCharacter_SetWrestlerProfile_Statics::NewProp_InWrestlerProfile = { "InWrestlerProfile", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacter_eventSetWrestlerProfile_Parms, InWrestlerProfile), Z_Construct_UScriptStruct_FELWrestlerProfile, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_SetWrestlerProfile_Statics::NewProp_InWrestlerProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetWrestlerProfile_Statics::NewProp_InWrestlerProfile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSCharacter_SetWrestlerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_SetWrestlerProfile_Statics::NewProp_InWrestlerProfile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_SetWrestlerProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSCharacter_SetWrestlerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSCharacter, nullptr, "SetWrestlerProfile", nullptr, nullptr, sizeof(ELSSCharacter_eventSetWrestlerProfile_Parms), Z_Construct_UFunction_AELSSCharacter_SetWrestlerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetWrestlerProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_SetWrestlerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_SetWrestlerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSCharacter_SetWrestlerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSCharacter_SetWrestlerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSCharacter_ShouldPlayFootstepSound_Statics
	{
		struct ELSSCharacter_eventShouldPlayFootstepSound_Parms
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
	void Z_Construct_UFunction_AELSSCharacter_ShouldPlayFootstepSound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSCharacter_eventShouldPlayFootstepSound_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSCharacter_ShouldPlayFootstepSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSCharacter_eventShouldPlayFootstepSound_Parms), &Z_Construct_UFunction_AELSSCharacter_ShouldPlayFootstepSound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSCharacter_ShouldPlayFootstepSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSCharacter_ShouldPlayFootstepSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSCharacter_ShouldPlayFootstepSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSCharacter_ShouldPlayFootstepSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSCharacter, nullptr, "ShouldPlayFootstepSound", nullptr, nullptr, sizeof(ELSSCharacter_eventShouldPlayFootstepSound_Parms), Z_Construct_UFunction_AELSSCharacter_ShouldPlayFootstepSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_ShouldPlayFootstepSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSCharacter_ShouldPlayFootstepSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSCharacter_ShouldPlayFootstepSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSCharacter_ShouldPlayFootstepSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSCharacter_ShouldPlayFootstepSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSCharacter_NoRegister()
	{
		return AELSSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AELSSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuildBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedMeshChara_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedMeshChara;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraMeshes_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExtraMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsignificateMeshes_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InsignificateMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsignificateMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InsignificateMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HairMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HairMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterProfilesClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterProfilesClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterProfiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterProfiles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SrcMeshesToMerge_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcMeshesToMerge_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SrcMeshesToMerge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcMeshComponentsToMerge_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SrcMeshComponentsToMerge_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcMeshComponentsToMerge_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SrcMeshComponentsToMerge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergedMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MergedMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisibleMergedMesh_MetaData[];
#endif
		static void NewProp_bVisibleMergedMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisibleMergedMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSCharacter_ApplySourceMeshMaterials, "ApplySourceMeshMaterials" }, // 3989258852
		{ &Z_Construct_UFunction_AELSSCharacter_GetActiveMontage, "GetActiveMontage" }, // 4099872627
		{ &Z_Construct_UFunction_AELSSCharacter_GetVoiceId, "GetVoiceId" }, // 3414553899
		{ &Z_Construct_UFunction_AELSSCharacter_GetWrestlerProfile, "GetWrestlerProfile" }, // 198323924
		{ &Z_Construct_UFunction_AELSSCharacter_MergeMeshes, "MergeMeshes" }, // 4178797031
		{ &Z_Construct_UFunction_AELSSCharacter_PlayMontage, "PlayMontage" }, // 992102310
		{ &Z_Construct_UFunction_AELSSCharacter_ReductionBodyMaterial, "ReductionBodyMaterial" }, // 3873539848
		{ &Z_Construct_UFunction_AELSSCharacter_SetEnableVisibleMergedMesh, "SetEnableVisibleMergedMesh" }, // 12865855
		{ &Z_Construct_UFunction_AELSSCharacter_SetExtraMeshes, "SetExtraMeshes" }, // 1155598280
		{ &Z_Construct_UFunction_AELSSCharacter_SetHairMesh, "SetHairMesh" }, // 3265494042
		{ &Z_Construct_UFunction_AELSSCharacter_SetInsignificateMeshes, "SetInsignificateMeshes" }, // 2539233275
		{ &Z_Construct_UFunction_AELSSCharacter_SetSpawnedMeshChara, "SetSpawnedMeshChara" }, // 3625261390
		{ &Z_Construct_UFunction_AELSSCharacter_SetSrcMeshComponentsToMerge, "SetSrcMeshComponentsToMerge" }, // 254878435
		{ &Z_Construct_UFunction_AELSSCharacter_SetupCharacterMesh, "SetupCharacterMesh" }, // 2132839323
		{ &Z_Construct_UFunction_AELSSCharacter_SetWrestlerProfile, "SetWrestlerProfile" }, // 3000058516
		{ &Z_Construct_UFunction_AELSSCharacter_ShouldPlayFootstepSound, "ShouldPlayFootstepSound" }, // 1556646991
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ELSSCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSCharacter_Statics::NewProp_BuildBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSCharacter_Statics::NewProp_BuildBody = { "BuildBody", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSCharacter, BuildBody), Z_Construct_UClass_UELBuildBody_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_BuildBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_BuildBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SpawnedMeshChara_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacter" },
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SpawnedMeshChara = { "SpawnedMeshChara", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSCharacter, SpawnedMeshChara), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SpawnedMeshChara_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SpawnedMeshChara_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSCharacter_Statics::NewProp_ExtraMeshes_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSCharacter_Statics::NewProp_ExtraMeshes_Inner = { "ExtraMeshes", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_ExtraMeshes_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_ExtraMeshes_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSCharacter_Statics::NewProp_ExtraMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSCharacter_Statics::NewProp_ExtraMeshes = { "ExtraMeshes", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSCharacter, ExtraMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_ExtraMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_ExtraMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSCharacter_Statics::NewProp_InsignificateMeshes_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSCharacter_Statics::NewProp_InsignificateMeshes_Inner = { "InsignificateMeshes", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_InsignificateMeshes_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_InsignificateMeshes_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSCharacter_Statics::NewProp_InsignificateMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSCharacter_Statics::NewProp_InsignificateMeshes = { "InsignificateMeshes", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSCharacter, InsignificateMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_InsignificateMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_InsignificateMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSCharacter_Statics::NewProp_HairMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSCharacter_Statics::NewProp_HairMesh = { "HairMesh", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSCharacter, HairMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_HairMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_HairMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSCharacter_Statics::NewProp_WrestlerProfile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacter" },
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSCharacter_Statics::NewProp_WrestlerProfile = { "WrestlerProfile", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSCharacter, WrestlerProfile), Z_Construct_UScriptStruct_FELWrestlerProfile, METADATA_PARAMS(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_WrestlerProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_WrestlerProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSCharacter_Statics::NewProp_CharacterProfilesClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacter" },
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSCharacter_Statics::NewProp_CharacterProfilesClass = { "CharacterProfilesClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSCharacter, CharacterProfilesClass), Z_Construct_UClass_UCharacterProfilesBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_CharacterProfilesClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_CharacterProfilesClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSCharacter_Statics::NewProp_CharacterProfiles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacter" },
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSCharacter_Statics::NewProp_CharacterProfiles = { "CharacterProfiles", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSCharacter, CharacterProfiles), Z_Construct_UClass_UCharacterProfilesBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_CharacterProfiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_CharacterProfiles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SrcMeshesToMerge_Inner = { "SrcMeshesToMerge", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SrcMeshesToMerge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacter" },
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SrcMeshesToMerge = { "SrcMeshesToMerge", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSCharacter, SrcMeshesToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SrcMeshesToMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SrcMeshesToMerge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SrcMeshComponentsToMerge_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SrcMeshComponentsToMerge_Inner = { "SrcMeshComponentsToMerge", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SrcMeshComponentsToMerge_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SrcMeshComponentsToMerge_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SrcMeshComponentsToMerge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SrcMeshComponentsToMerge = { "SrcMeshComponentsToMerge", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSCharacter, SrcMeshComponentsToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SrcMeshComponentsToMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SrcMeshComponentsToMerge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSCharacter_Statics::NewProp_MergedMeshComp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSCharacter_Statics::NewProp_MergedMeshComp = { "MergedMeshComp", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSCharacter, MergedMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_MergedMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_MergedMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSCharacter_Statics::NewProp_bVisibleMergedMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacter" },
		{ "ModuleRelativePath", "Public/ELSSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AELSSCharacter_Statics::NewProp_bVisibleMergedMesh_SetBit(void* Obj)
	{
		((AELSSCharacter*)Obj)->bVisibleMergedMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSCharacter_Statics::NewProp_bVisibleMergedMesh = { "bVisibleMergedMesh", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSCharacter), &Z_Construct_UClass_AELSSCharacter_Statics::NewProp_bVisibleMergedMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_bVisibleMergedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSCharacter_Statics::NewProp_bVisibleMergedMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSCharacter_Statics::NewProp_BuildBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SpawnedMeshChara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSCharacter_Statics::NewProp_ExtraMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSCharacter_Statics::NewProp_ExtraMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSCharacter_Statics::NewProp_InsignificateMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSCharacter_Statics::NewProp_InsignificateMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSCharacter_Statics::NewProp_HairMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSCharacter_Statics::NewProp_WrestlerProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSCharacter_Statics::NewProp_CharacterProfilesClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSCharacter_Statics::NewProp_CharacterProfiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SrcMeshesToMerge_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SrcMeshesToMerge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SrcMeshComponentsToMerge_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSCharacter_Statics::NewProp_SrcMeshComponentsToMerge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSCharacter_Statics::NewProp_MergedMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSCharacter_Statics::NewProp_bVisibleMergedMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSCharacter_Statics::ClassParams = {
		&AELSSCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSCharacter, 2567201202);
	template<> ABP_200508_API UClass* StaticClass<AELSSCharacter>()
	{
		return AELSSCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSCharacter(Z_Construct_UClass_AELSSCharacter, &AELSSCharacter::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
