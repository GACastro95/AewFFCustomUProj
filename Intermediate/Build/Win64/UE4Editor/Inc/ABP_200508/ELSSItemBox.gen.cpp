// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSItemBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSItemBox() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItemBox_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItemBox();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSItemBoxType();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageReason();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRarity();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSSpawnPickupSE();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInteractableObjectInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActorCommonInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSItemBox::execApplyLocationToTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyLocationToTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBox::execGetItemBoxType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSItemBoxType*)Z_Param__Result=P_THIS->GetItemBoxType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBox::execIsInteractableObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInteractableObject_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBox::execIsOpened)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOpened();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBox::execOnRep_BlockCollisionEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BlockCollisionEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBox::execOnRep_OpenedTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OpenedTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBox::execOnRep_SpawnPickupSE)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SpawnPickupSE();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBox::execOpenBox_Native)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenBox_Native();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBox::execPlayHitEffect)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLoc);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_GET_ENUM(ESSDamageReason,Z_Param_DamageReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayHitEffect(Z_Param_Out_StartLoc,Z_Param_DamageCauser,ESSDamageReason(Z_Param_DamageReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBox::execSetBlockCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlockCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBox::execSetBoxLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_InLocation);
		P_GET_UBOOL(Z_Param_inApplyToTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoxLocation(Z_Param_InLocation,Z_Param_inApplyToTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBox::execSetExternalVisible)
	{
		P_GET_UBOOL(Z_Param_flg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExternalVisible(Z_Param_flg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBox::execSetInternalVisible)
	{
		P_GET_UBOOL(Z_Param_flg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInternalVisible(Z_Param_flg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBox::execSpawnItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnItems_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSItemBox::execUpdateFalling_Native)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDeltaSeconds);
		P_GET_UBOOL(Z_Param_inApplyToTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateFalling_Native(Z_Param_inDeltaSeconds,Z_Param_inApplyToTransform);
		P_NATIVE_END;
	}
	static FName NAME_AELSSItemBox_GetMeshForPlaySE = FName(TEXT("GetMeshForPlaySE"));
	UMeshComponent* AELSSItemBox::GetMeshForPlaySE() const
	{
		ELSSItemBox_eventGetMeshForPlaySE_Parms Parms;
		const_cast<AELSSItemBox*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSItemBox_GetMeshForPlaySE),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSItemBox_IsInteractableObject = FName(TEXT("IsInteractableObject"));
	bool AELSSItemBox::IsInteractableObject() const
	{
		ELSSItemBox_eventIsInteractableObject_Parms Parms;
		const_cast<AELSSItemBox*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSItemBox_IsInteractableObject),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSItemBox_OpenBox = FName(TEXT("OpenBox"));
	void AELSSItemBox::OpenBox()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSItemBox_OpenBox),NULL);
	}
	static FName NAME_AELSSItemBox_PlaySpawnPickupSE = FName(TEXT("PlaySpawnPickupSE"));
	void AELSSItemBox::PlaySpawnPickupSE(ESSRarity inRarity)
	{
		ELSSItemBox_eventPlaySpawnPickupSE_Parms Parms;
		Parms.inRarity=inRarity;
		ProcessEvent(FindFunctionChecked(NAME_AELSSItemBox_PlaySpawnPickupSE),&Parms);
	}
	static FName NAME_AELSSItemBox_SetBlockCollision_Impl = FName(TEXT("SetBlockCollision_Impl"));
	void AELSSItemBox::SetBlockCollision_Impl()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSItemBox_SetBlockCollision_Impl),NULL);
	}
	static FName NAME_AELSSItemBox_SpawnItems = FName(TEXT("SpawnItems"));
	void AELSSItemBox::SpawnItems()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSItemBox_SpawnItems),NULL);
	}
	void AELSSItemBox::StaticRegisterNativesAELSSItemBox()
	{
		UClass* Class = AELSSItemBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyLocationToTransform", &AELSSItemBox::execApplyLocationToTransform },
			{ "GetItemBoxType", &AELSSItemBox::execGetItemBoxType },
			{ "IsInteractableObject", &AELSSItemBox::execIsInteractableObject },
			{ "IsOpened", &AELSSItemBox::execIsOpened },
			{ "OnRep_BlockCollisionEnabled", &AELSSItemBox::execOnRep_BlockCollisionEnabled },
			{ "OnRep_OpenedTime", &AELSSItemBox::execOnRep_OpenedTime },
			{ "OnRep_SpawnPickupSE", &AELSSItemBox::execOnRep_SpawnPickupSE },
			{ "OpenBox_Native", &AELSSItemBox::execOpenBox_Native },
			{ "PlayHitEffect", &AELSSItemBox::execPlayHitEffect },
			{ "SetBlockCollision", &AELSSItemBox::execSetBlockCollision },
			{ "SetBoxLocation", &AELSSItemBox::execSetBoxLocation },
			{ "SetExternalVisible", &AELSSItemBox::execSetExternalVisible },
			{ "SetInternalVisible", &AELSSItemBox::execSetInternalVisible },
			{ "SpawnItems", &AELSSItemBox::execSpawnItems },
			{ "UpdateFalling_Native", &AELSSItemBox::execUpdateFalling_Native },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSItemBox_ApplyLocationToTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_ApplyLocationToTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_ApplyLocationToTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "ApplyLocationToTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_ApplyLocationToTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_ApplyLocationToTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_ApplyLocationToTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_ApplyLocationToTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBox_GetItemBoxType_Statics
	{
		struct ELSSItemBox_eventGetItemBoxType_Parms
		{
			ESSItemBoxType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSItemBox_GetItemBoxType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSItemBox_GetItemBoxType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemBox_eventGetItemBoxType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSItemBoxType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemBox_GetItemBoxType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBox_GetItemBoxType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBox_GetItemBoxType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_GetItemBoxType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_GetItemBoxType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "GetItemBoxType", nullptr, nullptr, sizeof(ELSSItemBox_eventGetItemBoxType_Parms), Z_Construct_UFunction_AELSSItemBox_GetItemBoxType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_GetItemBoxType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_GetItemBoxType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_GetItemBoxType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_GetItemBoxType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_GetItemBoxType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBox_GetMeshForPlaySE_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_GetMeshForPlaySE_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSItemBox_GetMeshForPlaySE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemBox_eventGetMeshForPlaySE_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_GetMeshForPlaySE_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_GetMeshForPlaySE_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemBox_GetMeshForPlaySE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBox_GetMeshForPlaySE_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_GetMeshForPlaySE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_GetMeshForPlaySE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "GetMeshForPlaySE", nullptr, nullptr, sizeof(ELSSItemBox_eventGetMeshForPlaySE_Parms), Z_Construct_UFunction_AELSSItemBox_GetMeshForPlaySE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_GetMeshForPlaySE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_GetMeshForPlaySE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_GetMeshForPlaySE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_GetMeshForPlaySE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_GetMeshForPlaySE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBox_IsInteractableObject_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSItemBox_IsInteractableObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSItemBox_eventIsInteractableObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSItemBox_IsInteractableObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSItemBox_eventIsInteractableObject_Parms), &Z_Construct_UFunction_AELSSItemBox_IsInteractableObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemBox_IsInteractableObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBox_IsInteractableObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_IsInteractableObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_IsInteractableObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "IsInteractableObject", nullptr, nullptr, sizeof(ELSSItemBox_eventIsInteractableObject_Parms), Z_Construct_UFunction_AELSSItemBox_IsInteractableObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_IsInteractableObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_IsInteractableObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_IsInteractableObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_IsInteractableObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_IsInteractableObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBox_IsOpened_Statics
	{
		struct ELSSItemBox_eventIsOpened_Parms
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
	void Z_Construct_UFunction_AELSSItemBox_IsOpened_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSItemBox_eventIsOpened_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSItemBox_IsOpened_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSItemBox_eventIsOpened_Parms), &Z_Construct_UFunction_AELSSItemBox_IsOpened_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemBox_IsOpened_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBox_IsOpened_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_IsOpened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_IsOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "IsOpened", nullptr, nullptr, sizeof(ELSSItemBox_eventIsOpened_Parms), Z_Construct_UFunction_AELSSItemBox_IsOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_IsOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_IsOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_IsOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_IsOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_IsOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBox_OnRep_BlockCollisionEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_OnRep_BlockCollisionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_OnRep_BlockCollisionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "OnRep_BlockCollisionEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_OnRep_BlockCollisionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_OnRep_BlockCollisionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_OnRep_BlockCollisionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_OnRep_BlockCollisionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBox_OnRep_OpenedTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_OnRep_OpenedTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_OnRep_OpenedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "OnRep_OpenedTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_OnRep_OpenedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_OnRep_OpenedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_OnRep_OpenedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_OnRep_OpenedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBox_OnRep_SpawnPickupSE_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_OnRep_SpawnPickupSE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_OnRep_SpawnPickupSE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "OnRep_SpawnPickupSE", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_OnRep_SpawnPickupSE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_OnRep_SpawnPickupSE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_OnRep_SpawnPickupSE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_OnRep_SpawnPickupSE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBox_OpenBox_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_OpenBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_OpenBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "OpenBox", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_OpenBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_OpenBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_OpenBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_OpenBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBox_OpenBox_Native_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_OpenBox_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_OpenBox_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "OpenBox_Native", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_OpenBox_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_OpenBox_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_OpenBox_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_OpenBox_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics
	{
		struct ELSSItemBox_eventPlayHitEffect_Parms
		{
			FVector StartLoc;
			AActor* DamageCauser;
			ESSDamageReason DamageReason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLoc;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamageReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::NewProp_StartLoc_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::NewProp_StartLoc = { "StartLoc", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemBox_eventPlayHitEffect_Parms, StartLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::NewProp_StartLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::NewProp_StartLoc_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemBox_eventPlayHitEffect_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::NewProp_DamageReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::NewProp_DamageReason = { "DamageReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemBox_eventPlayHitEffect_Parms, DamageReason), Z_Construct_UEnum_ABP_200508_ESSDamageReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::NewProp_StartLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::NewProp_DamageReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::NewProp_DamageReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "PlayHitEffect", nullptr, nullptr, sizeof(ELSSItemBox_eventPlayHitEffect_Parms), Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_PlayHitEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_PlayHitEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBox_PlaySpawnPickupSE_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inRarity_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inRarity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSItemBox_PlaySpawnPickupSE_Statics::NewProp_inRarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSItemBox_PlaySpawnPickupSE_Statics::NewProp_inRarity = { "inRarity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemBox_eventPlaySpawnPickupSE_Parms, inRarity), Z_Construct_UEnum_ABP_200508_ESSRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemBox_PlaySpawnPickupSE_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBox_PlaySpawnPickupSE_Statics::NewProp_inRarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBox_PlaySpawnPickupSE_Statics::NewProp_inRarity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_PlaySpawnPickupSE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_PlaySpawnPickupSE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "PlaySpawnPickupSE", nullptr, nullptr, sizeof(ELSSItemBox_eventPlaySpawnPickupSE_Parms), Z_Construct_UFunction_AELSSItemBox_PlaySpawnPickupSE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_PlaySpawnPickupSE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_PlaySpawnPickupSE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_PlaySpawnPickupSE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_PlaySpawnPickupSE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_PlaySpawnPickupSE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBox_SetBlockCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_SetBlockCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_SetBlockCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "SetBlockCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_SetBlockCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_SetBlockCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_SetBlockCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_SetBlockCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBox_SetBlockCollision_Impl_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_SetBlockCollision_Impl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_SetBlockCollision_Impl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "SetBlockCollision_Impl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_SetBlockCollision_Impl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_SetBlockCollision_Impl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_SetBlockCollision_Impl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_SetBlockCollision_Impl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBox_SetBoxLocation_Statics
	{
		struct ELSSItemBox_eventSetBoxLocation_Parms
		{
			FVector InLocation;
			bool inApplyToTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
		static void NewProp_inApplyToTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inApplyToTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_SetBoxLocation_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSItemBox_SetBoxLocation_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemBox_eventSetBoxLocation_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_SetBoxLocation_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_SetBoxLocation_Statics::NewProp_InLocation_MetaData)) };
	void Z_Construct_UFunction_AELSSItemBox_SetBoxLocation_Statics::NewProp_inApplyToTransform_SetBit(void* Obj)
	{
		((ELSSItemBox_eventSetBoxLocation_Parms*)Obj)->inApplyToTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSItemBox_SetBoxLocation_Statics::NewProp_inApplyToTransform = { "inApplyToTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSItemBox_eventSetBoxLocation_Parms), &Z_Construct_UFunction_AELSSItemBox_SetBoxLocation_Statics::NewProp_inApplyToTransform_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemBox_SetBoxLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBox_SetBoxLocation_Statics::NewProp_InLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBox_SetBoxLocation_Statics::NewProp_inApplyToTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_SetBoxLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_SetBoxLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "SetBoxLocation", nullptr, nullptr, sizeof(ELSSItemBox_eventSetBoxLocation_Parms), Z_Construct_UFunction_AELSSItemBox_SetBoxLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_SetBoxLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_SetBoxLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_SetBoxLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_SetBoxLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_SetBoxLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBox_SetExternalVisible_Statics
	{
		struct ELSSItemBox_eventSetExternalVisible_Parms
		{
			bool flg;
		};
		static void NewProp_flg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSItemBox_SetExternalVisible_Statics::NewProp_flg_SetBit(void* Obj)
	{
		((ELSSItemBox_eventSetExternalVisible_Parms*)Obj)->flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSItemBox_SetExternalVisible_Statics::NewProp_flg = { "flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSItemBox_eventSetExternalVisible_Parms), &Z_Construct_UFunction_AELSSItemBox_SetExternalVisible_Statics::NewProp_flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemBox_SetExternalVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBox_SetExternalVisible_Statics::NewProp_flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_SetExternalVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_SetExternalVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "SetExternalVisible", nullptr, nullptr, sizeof(ELSSItemBox_eventSetExternalVisible_Parms), Z_Construct_UFunction_AELSSItemBox_SetExternalVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_SetExternalVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_SetExternalVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_SetExternalVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_SetExternalVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_SetExternalVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBox_SetInternalVisible_Statics
	{
		struct ELSSItemBox_eventSetInternalVisible_Parms
		{
			bool flg;
		};
		static void NewProp_flg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSItemBox_SetInternalVisible_Statics::NewProp_flg_SetBit(void* Obj)
	{
		((ELSSItemBox_eventSetInternalVisible_Parms*)Obj)->flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSItemBox_SetInternalVisible_Statics::NewProp_flg = { "flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSItemBox_eventSetInternalVisible_Parms), &Z_Construct_UFunction_AELSSItemBox_SetInternalVisible_Statics::NewProp_flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemBox_SetInternalVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBox_SetInternalVisible_Statics::NewProp_flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_SetInternalVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_SetInternalVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "SetInternalVisible", nullptr, nullptr, sizeof(ELSSItemBox_eventSetInternalVisible_Parms), Z_Construct_UFunction_AELSSItemBox_SetInternalVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_SetInternalVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_SetInternalVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_SetInternalVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_SetInternalVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_SetInternalVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBox_SpawnItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_SpawnItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_SpawnItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "SpawnItems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_SpawnItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_SpawnItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_SpawnItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_SpawnItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics
	{
		struct ELSSItemBox_eventUpdateFalling_Native_Parms
		{
			float inDeltaSeconds;
			bool inApplyToTransform;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static void NewProp_inApplyToTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inApplyToTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSItemBox_eventUpdateFalling_Native_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics::NewProp_inApplyToTransform_SetBit(void* Obj)
	{
		((ELSSItemBox_eventUpdateFalling_Native_Parms*)Obj)->inApplyToTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics::NewProp_inApplyToTransform = { "inApplyToTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSItemBox_eventUpdateFalling_Native_Parms), &Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics::NewProp_inApplyToTransform_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSItemBox_eventUpdateFalling_Native_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSItemBox_eventUpdateFalling_Native_Parms), &Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics::NewProp_inDeltaSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics::NewProp_inApplyToTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSItemBox, nullptr, "UpdateFalling_Native", nullptr, nullptr, sizeof(ELSSItemBox_eventUpdateFalling_Native_Parms), Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSItemBox_NoRegister()
	{
		return AELSSItemBox::StaticClass();
	}
	struct Z_Construct_UClass_AELSSItemBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEffectLineTraceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitEffectLineTraceScale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HitEffectLineTraceObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitEffectLineTraceObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitEffectLineTraceObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemBoxType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBoxType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemBoxType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSpawnOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemSpawnOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CeilCheckOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CeilCheckOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocationOffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartLocationOffsetZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CeilCheckOffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CeilCheckOffsetZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandCheckOffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LandCheckOffsetZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractUIOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractUIOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DotIconLocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DotIconLocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DotIconBaseLocationOffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DotIconBaseLocationOffsetZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeTimeInDamageArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeTimeInDamageArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayDestroyTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayDestroyTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandLocationZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LandLocationZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetRotationYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetRotationYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipAnim_MetaData[];
#endif
		static void NewProp_SkipAnim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpenedTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpawnPickupSE_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPickupSE_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpawnPickupSE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockCollisionEnabled_MetaData[];
#endif
		static void NewProp_BlockCollisionEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BlockCollisionEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandCheckCapsuleHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LandCheckCapsuleHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandCheckCapsuleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LandCheckCapsuleRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallingAccel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FallingAccel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FallingSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LandCheckTraceObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandCheckTraceObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LandCheckTraceObjectTypes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSItemBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSItemBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSItemBox_ApplyLocationToTransform, "ApplyLocationToTransform" }, // 4239362339
		{ &Z_Construct_UFunction_AELSSItemBox_GetItemBoxType, "GetItemBoxType" }, // 1168140630
		{ &Z_Construct_UFunction_AELSSItemBox_GetMeshForPlaySE, "GetMeshForPlaySE" }, // 3626758903
		{ &Z_Construct_UFunction_AELSSItemBox_IsInteractableObject, "IsInteractableObject" }, // 2053004340
		{ &Z_Construct_UFunction_AELSSItemBox_IsOpened, "IsOpened" }, // 714036886
		{ &Z_Construct_UFunction_AELSSItemBox_OnRep_BlockCollisionEnabled, "OnRep_BlockCollisionEnabled" }, // 3306437382
		{ &Z_Construct_UFunction_AELSSItemBox_OnRep_OpenedTime, "OnRep_OpenedTime" }, // 2241219495
		{ &Z_Construct_UFunction_AELSSItemBox_OnRep_SpawnPickupSE, "OnRep_SpawnPickupSE" }, // 4171966609
		{ &Z_Construct_UFunction_AELSSItemBox_OpenBox, "OpenBox" }, // 238898444
		{ &Z_Construct_UFunction_AELSSItemBox_OpenBox_Native, "OpenBox_Native" }, // 3515596274
		{ &Z_Construct_UFunction_AELSSItemBox_PlayHitEffect, "PlayHitEffect" }, // 2891104032
		{ &Z_Construct_UFunction_AELSSItemBox_PlaySpawnPickupSE, "PlaySpawnPickupSE" }, // 110469119
		{ &Z_Construct_UFunction_AELSSItemBox_SetBlockCollision, "SetBlockCollision" }, // 843898790
		{ &Z_Construct_UFunction_AELSSItemBox_SetBlockCollision_Impl, "SetBlockCollision_Impl" }, // 3628184293
		{ &Z_Construct_UFunction_AELSSItemBox_SetBoxLocation, "SetBoxLocation" }, // 3890603880
		{ &Z_Construct_UFunction_AELSSItemBox_SetExternalVisible, "SetExternalVisible" }, // 2220948521
		{ &Z_Construct_UFunction_AELSSItemBox_SetInternalVisible, "SetInternalVisible" }, // 1286573009
		{ &Z_Construct_UFunction_AELSSItemBox_SpawnItems, "SpawnItems" }, // 1157855169
		{ &Z_Construct_UFunction_AELSSItemBox_UpdateFalling_Native, "UpdateFalling_Native" }, // 1761293654
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSItemBox.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_HitEffectLineTraceScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_HitEffectLineTraceScale = { "HitEffectLineTraceScale", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, HitEffectLineTraceScale), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_HitEffectLineTraceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_HitEffectLineTraceScale_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_HitEffectLineTraceObjectTypes_Inner = { "HitEffectLineTraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_HitEffectLineTraceObjectTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_HitEffectLineTraceObjectTypes = { "HitEffectLineTraceObjectTypes", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, HitEffectLineTraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_HitEffectLineTraceObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_HitEffectLineTraceObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_ItemBoxType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_ItemBoxType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_ItemBoxType = { "ItemBoxType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, ItemBoxType), Z_Construct_UEnum_ABP_200508_ESSItemBoxType, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_ItemBoxType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_ItemBoxType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SpawnDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SpawnDuration = { "SpawnDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, SpawnDuration), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SpawnDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SpawnDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_ItemSpawnOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_ItemSpawnOffset = { "ItemSpawnOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, ItemSpawnOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_ItemSpawnOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_ItemSpawnOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_CeilCheckOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_CeilCheckOffset = { "CeilCheckOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, CeilCheckOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_CeilCheckOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_CeilCheckOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_StartLocationOffsetZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_StartLocationOffsetZ = { "StartLocationOffsetZ", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, StartLocationOffsetZ), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_StartLocationOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_StartLocationOffsetZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_CeilCheckOffsetZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_CeilCheckOffsetZ = { "CeilCheckOffsetZ", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, CeilCheckOffsetZ), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_CeilCheckOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_CeilCheckOffsetZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckOffsetZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckOffsetZ = { "LandCheckOffsetZ", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, LandCheckOffsetZ), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckOffsetZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_InteractUIOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_InteractUIOffset = { "InteractUIOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, InteractUIOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_InteractUIOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_InteractUIOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_DotIconLocationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_DotIconLocationOffset = { "DotIconLocationOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, DotIconLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_DotIconLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_DotIconLocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_DotIconBaseLocationOffsetZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_DotIconBaseLocationOffsetZ = { "DotIconBaseLocationOffsetZ", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, DotIconBaseLocationOffsetZ), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_DotIconBaseLocationOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_DotIconBaseLocationOffsetZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LifeTimeInDamageArea_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LifeTimeInDamageArea = { "LifeTimeInDamageArea", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, LifeTimeInDamageArea), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LifeTimeInDamageArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LifeTimeInDamageArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_DelayDestroyTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_DelayDestroyTime = { "DelayDestroyTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, DelayDestroyTime), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_DelayDestroyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_DelayDestroyTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, TargetLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandLocationZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandLocationZ = { "LandLocationZ", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, LandLocationZ), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandLocationZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandLocationZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_TargetRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_TargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_TargetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_TargetRotationYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_TargetRotationYaw = { "TargetRotationYaw", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, TargetRotationYaw), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_TargetRotationYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_TargetRotationYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SkipAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	void Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SkipAnim_SetBit(void* Obj)
	{
		((AELSSItemBox*)Obj)->SkipAnim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SkipAnim = { "SkipAnim", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSItemBox), &Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SkipAnim_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SkipAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SkipAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SpawnedTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SpawnedTime = { "SpawnedTime", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, SpawnedTime), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SpawnedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SpawnedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_OpenedTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_OpenedTime = { "OpenedTime", "OnRep_OpenedTime", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, OpenedTime), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_OpenedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_OpenedTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SpawnPickupSE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SpawnPickupSE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SpawnPickupSE = { "SpawnPickupSE", "OnRep_SpawnPickupSE", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, SpawnPickupSE), Z_Construct_UEnum_ABP_200508_ESSSpawnPickupSE, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SpawnPickupSE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SpawnPickupSE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_BlockCollisionEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	void Z_Construct_UClass_AELSSItemBox_Statics::NewProp_BlockCollisionEnabled_SetBit(void* Obj)
	{
		((AELSSItemBox*)Obj)->BlockCollisionEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_BlockCollisionEnabled = { "BlockCollisionEnabled", "OnRep_BlockCollisionEnabled", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSItemBox), &Z_Construct_UClass_AELSSItemBox_Statics::NewProp_BlockCollisionEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_BlockCollisionEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_BlockCollisionEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckCapsuleHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckCapsuleHeight = { "LandCheckCapsuleHeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, LandCheckCapsuleHeight), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckCapsuleHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckCapsuleHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckCapsuleRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckCapsuleRadius = { "LandCheckCapsuleRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, LandCheckCapsuleRadius), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckCapsuleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckCapsuleRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_FallingAccel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_FallingAccel = { "FallingAccel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, FallingAccel), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_FallingAccel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_FallingAccel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_FallingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_FallingSpeed = { "FallingSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, FallingSpeed), METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_FallingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_FallingSpeed_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckTraceObjectTypes_Inner = { "LandCheckTraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckTraceObjectTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItemBox" },
		{ "ModuleRelativePath", "Public/ELSSItemBox.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckTraceObjectTypes = { "LandCheckTraceObjectTypes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItemBox, LandCheckTraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckTraceObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckTraceObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSItemBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_HitEffectLineTraceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_HitEffectLineTraceObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_HitEffectLineTraceObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_ItemBoxType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_ItemBoxType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SpawnDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_ItemSpawnOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_CeilCheckOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_StartLocationOffsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_CeilCheckOffsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckOffsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_InteractUIOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_DotIconLocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_DotIconBaseLocationOffsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LifeTimeInDamageArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_DelayDestroyTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandLocationZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_TargetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_TargetRotationYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SkipAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SpawnedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_OpenedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SpawnPickupSE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_SpawnPickupSE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_BlockCollisionEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckCapsuleHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckCapsuleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_FallingAccel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_FallingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckTraceObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItemBox_Statics::NewProp_LandCheckTraceObjectTypes,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSItemBox_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSInteractableObjectInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSItemBox, IELSSInteractableObjectInterface), false },
			{ Z_Construct_UClass_UELSSActorCommonInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSItemBox, IELSSActorCommonInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSItemBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSItemBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSItemBox_Statics::ClassParams = {
		&AELSSItemBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSItemBox_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSItemBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItemBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSItemBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSItemBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSItemBox, 2405341482);
	template<> ABP_200508_API UClass* StaticClass<AELSSItemBox>()
	{
		return AELSSItemBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSItemBox(Z_Construct_UClass_AELSSItemBox, &AELSSItemBox::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSItemBox"), false, nullptr, nullptr, nullptr);

	void AELSSItemBox::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TargetLocation(TEXT("TargetLocation"));
		static const FName Name_LandLocationZ(TEXT("LandLocationZ"));
		static const FName Name_TargetRotationYaw(TEXT("TargetRotationYaw"));
		static const FName Name_SkipAnim(TEXT("SkipAnim"));
		static const FName Name_SpawnedTime(TEXT("SpawnedTime"));
		static const FName Name_OpenedTime(TEXT("OpenedTime"));
		static const FName Name_SpawnPickupSE(TEXT("SpawnPickupSE"));
		static const FName Name_BlockCollisionEnabled(TEXT("BlockCollisionEnabled"));

		const bool bIsValid = true
			&& Name_TargetLocation == ClassReps[(int32)ENetFields_Private::TargetLocation].Property->GetFName()
			&& Name_LandLocationZ == ClassReps[(int32)ENetFields_Private::LandLocationZ].Property->GetFName()
			&& Name_TargetRotationYaw == ClassReps[(int32)ENetFields_Private::TargetRotationYaw].Property->GetFName()
			&& Name_SkipAnim == ClassReps[(int32)ENetFields_Private::SkipAnim].Property->GetFName()
			&& Name_SpawnedTime == ClassReps[(int32)ENetFields_Private::SpawnedTime].Property->GetFName()
			&& Name_OpenedTime == ClassReps[(int32)ENetFields_Private::OpenedTime].Property->GetFName()
			&& Name_SpawnPickupSE == ClassReps[(int32)ENetFields_Private::SpawnPickupSE].Property->GetFName()
			&& Name_BlockCollisionEnabled == ClassReps[(int32)ENetFields_Private::BlockCollisionEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSItemBox"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSItemBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
