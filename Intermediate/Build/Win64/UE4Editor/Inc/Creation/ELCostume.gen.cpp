// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELCostume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCostume() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UELCostume_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UELCostume();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELCharacterComponent();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EEditPartsSlot();
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EBasicFindResult();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsCategoryName();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FAttireParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FAttireData();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPaintData();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditPartsData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UELCostume::execAddPartsAsset)
	{
		P_GET_ENUM(EEditPartsSlot,Z_Param_Slot);
		P_GET_OBJECT(UEditWrestlerPartsAsset,Z_Param_Asset);
		P_GET_PROPERTY(FIntProperty,Z_Param_MeshIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->AddPartsAsset(EEditPartsSlot(Z_Param_Slot),Z_Param_Asset,Z_Param_MeshIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execAddPartsMesh)
	{
		P_GET_ENUM(EEditPartsSlot,Z_Param_Slot);
		P_GET_OBJECT(USkeletalMesh,Z_Param_NewMesh);
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->AddPartsMesh(EEditPartsSlot(Z_Param_Slot),Z_Param_NewMesh,Z_Param_InSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execBindDynamicMaterial)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
		P_GET_TSET_REF(FName,Z_Param_Out_MaterialSlotNames);
		P_GET_OBJECT(UMaterialInterface,Z_Param_OverrideMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindDynamicMaterial(Z_Param_SkeletalMeshComponent,Z_Param_Out_MaterialSlotNames,Z_Param_OverrideMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execBindDynamicMaterials)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
		P_GET_OBJECT(UMaterialInterface,Z_Param_OverrideMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindDynamicMaterials(Z_Param_SkeletalMeshComponent,Z_Param_OverrideMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execGetEyeMaterialInstanceDynamic)
	{
		P_GET_UBOOL(Z_Param_bLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetEyeMaterialInstanceDynamic(Z_Param_bLeft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execGetMaterialInstanceDynamic)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_MaterialSlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetMaterialInstanceDynamic(Z_Param_Out_MaterialSlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execGetMeshes)
	{
		P_GET_TARRAY_REF(USkeletalMeshComponent*,Z_Param_Out_List);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMeshes_Implementation(Z_Param_Out_List);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execGetPartsMesh)
	{
		P_GET_ENUM(EEditPartsSlot,Z_Param_Slot);
		P_GET_OBJECT_REF(USkeletalMeshComponent,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPartsMesh(EEditPartsSlot(Z_Param_Slot),Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execGetPartsMeshWithResult)
	{
		P_GET_ENUM(EEditPartsSlot,Z_Param_Slot);
		P_GET_ENUM_REF(EBasicFindResult,Z_Param_Out_resultType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetPartsMeshWithResult(EEditPartsSlot(Z_Param_Slot),(EBasicFindResult&)(Z_Param_Out_resultType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execIsEquippedParts)
	{
		P_GET_STRUCT_REF(FEditPartsCategoryName,Z_Param_Out_PartsCategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEquippedParts(Z_Param_Out_PartsCategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execLoadAttireParam)
	{
		P_GET_STRUCT_REF(FAttireParam,Z_Param_Out_InParam);
		P_GET_STRUCT_REF(FAttireData,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAttireParam(Z_Param_Out_InParam,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execOnSetupAttire)
	{
		P_GET_STRUCT_REF(FAttireData,Z_Param_Out_AttireData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSetupAttire_Implementation(Z_Param_Out_AttireData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execOnSetupPaint)
	{
		P_GET_STRUCT_REF(FEditPaintData,Z_Param_Out_EditPaintData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnSetupPaint_Implementation(Z_Param_Out_EditPaintData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execOnSetupParts)
	{
		P_GET_ENUM(EEditPartsSlot,Z_Param_Slot);
		P_GET_STRUCT_REF(FEditPartsData,Z_Param_Out_EditPartsData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->OnSetupParts_Implementation(EEditPartsSlot(Z_Param_Slot),Z_Param_Out_EditPartsData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execOnUpdateParts)
	{
		P_GET_ENUM(EEditPartsSlot,Z_Param_Slot);
		P_GET_OBJECT(USkeletalMesh,Z_Param_NewMesh);
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->OnUpdateParts_Implementation(EEditPartsSlot(Z_Param_Slot),Z_Param_NewMesh,Z_Param_InSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execRemovePartsMesh)
	{
		P_GET_ENUM(EEditPartsSlot,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePartsMesh(EEditPartsSlot(Z_Param_Slot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execResetMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetMaterials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execSetAdjustSkinToneEnable)
	{
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAdjustSkinToneEnable(Z_Param_bFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execSetMaterialSectionVisibility)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
		P_GET_TSET_REF(FName,Z_Param_Out_MaterialSlotNames);
		P_GET_UBOOL(Z_Param_bShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterialSectionVisibility(Z_Param_SkeletalMeshComponent,Z_Param_Out_MaterialSlotNames,Z_Param_bShow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execSetScalarParameter)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_GET_PROPERTY(FNameProperty,Z_Param_Specific);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScalarParameter(Z_Param_Out_ParameterName,Z_Param_NewValue,Z_Param_Specific);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execSetTextureParameter)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ParameterName);
		P_GET_OBJECT(UTexture,Z_Param_NewTexture);
		P_GET_PROPERTY(FNameProperty,Z_Param_Specific);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextureParameter(Z_Param_Out_ParameterName,Z_Param_NewTexture,Z_Param_Specific);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execSetupCostume)
	{
		P_GET_STRUCT_REF(FAttireParam,Z_Param_Out_Base);
		P_GET_STRUCT_REF(FAttireParam,Z_Param_Out_Attire);
		P_GET_STRUCT_REF(FAttireParam,Z_Param_Out_Extra);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupCostume(Z_Param_Out_Base,Z_Param_Out_Attire,Z_Param_Out_Extra);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execSetupPartsMeshComponent)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Parent);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Child);
		P_GET_PROPERTY(FNameProperty,Z_Param_CollisionProfileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupPartsMeshComponent(Z_Param_Parent,Z_Param_Child,Z_Param_CollisionProfileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execSetVectorParameter)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ParameterName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewValue);
		P_GET_PROPERTY(FNameProperty,Z_Param_Specific);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVectorParameter(Z_Param_Out_ParameterName,Z_Param_Out_NewValue,Z_Param_Specific);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execUnbindDynamicMaterials)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindDynamicMaterials(Z_Param_SkeletalMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execUpdateEyeColorParameter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Hue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Luminous);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Desaturation);
		P_GET_UBOOL(Z_Param_bLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEyeColorParameter(Z_Param_Hue,Z_Param_Luminous,Z_Param_Desaturation,Z_Param_bLeft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCostume::execUpdateEyeHighlightParameter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HighlightLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEyeHighlightParameter(Z_Param_HighlightLevel);
		P_NATIVE_END;
	}
	static FName NAME_UELCostume_GetMeshes = FName(TEXT("GetMeshes"));
	void UELCostume::GetMeshes(TArray<USkeletalMeshComponent*>& List)
	{
		ELCostume_eventGetMeshes_Parms Parms;
		Parms.List=List;
		ProcessEvent(FindFunctionChecked(NAME_UELCostume_GetMeshes),&Parms);
		List=Parms.List;
	}
	static FName NAME_UELCostume_OnSetupAttire = FName(TEXT("OnSetupAttire"));
	void UELCostume::OnSetupAttire(FAttireData const& AttireData)
	{
		ELCostume_eventOnSetupAttire_Parms Parms;
		Parms.AttireData=AttireData;
		ProcessEvent(FindFunctionChecked(NAME_UELCostume_OnSetupAttire),&Parms);
	}
	static FName NAME_UELCostume_OnSetupPaint = FName(TEXT("OnSetupPaint"));
	bool UELCostume::OnSetupPaint(FEditPaintData const& EditPaintData)
	{
		ELCostume_eventOnSetupPaint_Parms Parms;
		Parms.EditPaintData=EditPaintData;
		ProcessEvent(FindFunctionChecked(NAME_UELCostume_OnSetupPaint),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELCostume_OnSetupParts = FName(TEXT("OnSetupParts"));
	USkeletalMeshComponent* UELCostume::OnSetupParts(const EEditPartsSlot Slot, FEditPartsData const& EditPartsData)
	{
		ELCostume_eventOnSetupParts_Parms Parms;
		Parms.Slot=Slot;
		Parms.EditPartsData=EditPartsData;
		ProcessEvent(FindFunctionChecked(NAME_UELCostume_OnSetupParts),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELCostume_OnUpdateParts = FName(TEXT("OnUpdateParts"));
	USkeletalMeshComponent* UELCostume::OnUpdateParts(const EEditPartsSlot Slot, USkeletalMesh* NewMesh, const FName InSocketName)
	{
		ELCostume_eventOnUpdateParts_Parms Parms;
		Parms.Slot=Slot;
		Parms.NewMesh=NewMesh;
		Parms.InSocketName=InSocketName;
		ProcessEvent(FindFunctionChecked(NAME_UELCostume_OnUpdateParts),&Parms);
		return Parms.ReturnValue;
	}
	void UELCostume::StaticRegisterNativesUELCostume()
	{
		UClass* Class = UELCostume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPartsAsset", &UELCostume::execAddPartsAsset },
			{ "AddPartsMesh", &UELCostume::execAddPartsMesh },
			{ "BindDynamicMaterial", &UELCostume::execBindDynamicMaterial },
			{ "BindDynamicMaterials", &UELCostume::execBindDynamicMaterials },
			{ "GetEyeMaterialInstanceDynamic", &UELCostume::execGetEyeMaterialInstanceDynamic },
			{ "GetMaterialInstanceDynamic", &UELCostume::execGetMaterialInstanceDynamic },
			{ "GetMeshes", &UELCostume::execGetMeshes },
			{ "GetPartsMesh", &UELCostume::execGetPartsMesh },
			{ "GetPartsMeshWithResult", &UELCostume::execGetPartsMeshWithResult },
			{ "IsEquippedParts", &UELCostume::execIsEquippedParts },
			{ "LoadAttireParam", &UELCostume::execLoadAttireParam },
			{ "OnSetupAttire", &UELCostume::execOnSetupAttire },
			{ "OnSetupPaint", &UELCostume::execOnSetupPaint },
			{ "OnSetupParts", &UELCostume::execOnSetupParts },
			{ "OnUpdateParts", &UELCostume::execOnUpdateParts },
			{ "RemovePartsMesh", &UELCostume::execRemovePartsMesh },
			{ "Reset", &UELCostume::execReset },
			{ "ResetMaterials", &UELCostume::execResetMaterials },
			{ "SetAdjustSkinToneEnable", &UELCostume::execSetAdjustSkinToneEnable },
			{ "SetMaterialSectionVisibility", &UELCostume::execSetMaterialSectionVisibility },
			{ "SetScalarParameter", &UELCostume::execSetScalarParameter },
			{ "SetTextureParameter", &UELCostume::execSetTextureParameter },
			{ "SetupCostume", &UELCostume::execSetupCostume },
			{ "SetupPartsMeshComponent", &UELCostume::execSetupPartsMeshComponent },
			{ "SetVectorParameter", &UELCostume::execSetVectorParameter },
			{ "UnbindDynamicMaterials", &UELCostume::execUnbindDynamicMaterials },
			{ "UpdateEyeColorParameter", &UELCostume::execUpdateEyeColorParameter },
			{ "UpdateEyeHighlightParameter", &UELCostume::execUpdateEyeHighlightParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics
	{
		struct ELCostume_eventAddPartsAsset_Parms
		{
			EEditPartsSlot Slot;
			UEditWrestlerPartsAsset* Asset;
			int32 MeshIndex;
			USkeletalMeshComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MeshIndex;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventAddPartsAsset_Parms, Slot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_Slot_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventAddPartsAsset_Parms, Asset), Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_MeshIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventAddPartsAsset_Parms, MeshIndex), METADATA_PARAMS(Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_MeshIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_MeshIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventAddPartsAsset_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_Slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_MeshIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "AddPartsAsset", nullptr, nullptr, sizeof(ELCostume_eventAddPartsAsset_Parms), Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_AddPartsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_AddPartsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics
	{
		struct ELCostume_eventAddPartsMesh_Parms
		{
			EEditPartsSlot Slot;
			USkeletalMesh* NewMesh;
			FName InSocketName;
			USkeletalMeshComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventAddPartsMesh_Parms, Slot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_Slot_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventAddPartsMesh_Parms, NewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_InSocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventAddPartsMesh_Parms, InSocketName), METADATA_PARAMS(Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_InSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_InSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventAddPartsMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_Slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_NewMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_InSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "AddPartsMesh", nullptr, nullptr, sizeof(ELCostume_eventAddPartsMesh_Parms), Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_AddPartsMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_AddPartsMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics
	{
		struct ELCostume_eventBindDynamicMaterial_Parms
		{
			USkeletalMeshComponent* SkeletalMeshComponent;
			TSet<FName> MaterialSlotNames;
			UMaterialInterface* OverrideMaterial;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialSlotNames_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_MaterialSlotNames;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventBindDynamicMaterial_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::NewProp_MaterialSlotNames_ElementProp = { "MaterialSlotNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::NewProp_MaterialSlotNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::NewProp_MaterialSlotNames = { "MaterialSlotNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventBindDynamicMaterial_Parms, MaterialSlotNames), METADATA_PARAMS(Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::NewProp_MaterialSlotNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::NewProp_MaterialSlotNames_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::NewProp_OverrideMaterial = { "OverrideMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventBindDynamicMaterial_Parms, OverrideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::NewProp_MaterialSlotNames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::NewProp_MaterialSlotNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::NewProp_OverrideMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "BindDynamicMaterial", nullptr, nullptr, sizeof(ELCostume_eventBindDynamicMaterial_Parms), Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_BindDynamicMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_BindDynamicMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_BindDynamicMaterials_Statics
	{
		struct ELCostume_eventBindDynamicMaterials_Parms
		{
			USkeletalMeshComponent* SkeletalMeshComponent;
			UMaterialInterface* OverrideMaterial;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_BindDynamicMaterials_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_BindDynamicMaterials_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventBindDynamicMaterials_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_BindDynamicMaterials_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_BindDynamicMaterials_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_BindDynamicMaterials_Statics::NewProp_OverrideMaterial = { "OverrideMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventBindDynamicMaterials_Parms, OverrideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_BindDynamicMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_BindDynamicMaterials_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_BindDynamicMaterials_Statics::NewProp_OverrideMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_BindDynamicMaterials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_BindDynamicMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "BindDynamicMaterials", nullptr, nullptr, sizeof(ELCostume_eventBindDynamicMaterials_Parms), Z_Construct_UFunction_UELCostume_BindDynamicMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_BindDynamicMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_BindDynamicMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_BindDynamicMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_BindDynamicMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_BindDynamicMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic_Statics
	{
		struct ELCostume_eventGetEyeMaterialInstanceDynamic_Parms
		{
			bool bLeft;
			UMaterialInstanceDynamic* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeft_MetaData[];
#endif
		static void NewProp_bLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeft;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic_Statics::NewProp_bLeft_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic_Statics::NewProp_bLeft_SetBit(void* Obj)
	{
		((ELCostume_eventGetEyeMaterialInstanceDynamic_Parms*)Obj)->bLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic_Statics::NewProp_bLeft = { "bLeft", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCostume_eventGetEyeMaterialInstanceDynamic_Parms), &Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic_Statics::NewProp_bLeft_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic_Statics::NewProp_bLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic_Statics::NewProp_bLeft_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventGetEyeMaterialInstanceDynamic_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic_Statics::NewProp_bLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "GetEyeMaterialInstanceDynamic", nullptr, nullptr, sizeof(ELCostume_eventGetEyeMaterialInstanceDynamic_Parms), Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_GetMaterialInstanceDynamic_Statics
	{
		struct ELCostume_eventGetMaterialInstanceDynamic_Parms
		{
			FName MaterialSlotName;
			UMaterialInstanceDynamic* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_GetMaterialInstanceDynamic_Statics::NewProp_MaterialSlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCostume_GetMaterialInstanceDynamic_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventGetMaterialInstanceDynamic_Parms, MaterialSlotName), METADATA_PARAMS(Z_Construct_UFunction_UELCostume_GetMaterialInstanceDynamic_Statics::NewProp_MaterialSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_GetMaterialInstanceDynamic_Statics::NewProp_MaterialSlotName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_GetMaterialInstanceDynamic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventGetMaterialInstanceDynamic_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_GetMaterialInstanceDynamic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_GetMaterialInstanceDynamic_Statics::NewProp_MaterialSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_GetMaterialInstanceDynamic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_GetMaterialInstanceDynamic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_GetMaterialInstanceDynamic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "GetMaterialInstanceDynamic", nullptr, nullptr, sizeof(ELCostume_eventGetMaterialInstanceDynamic_Parms), Z_Construct_UFunction_UELCostume_GetMaterialInstanceDynamic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_GetMaterialInstanceDynamic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_GetMaterialInstanceDynamic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_GetMaterialInstanceDynamic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_GetMaterialInstanceDynamic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_GetMaterialInstanceDynamic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_GetMeshes_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_List_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_List_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_List;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_GetMeshes_Statics::NewProp_List_Inner = { "List", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_GetMeshes_Statics::NewProp_List_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCostume_GetMeshes_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventGetMeshes_Parms, List), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_GetMeshes_Statics::NewProp_List_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_GetMeshes_Statics::NewProp_List_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_GetMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_GetMeshes_Statics::NewProp_List_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_GetMeshes_Statics::NewProp_List,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_GetMeshes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_GetMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "GetMeshes", nullptr, nullptr, sizeof(ELCostume_eventGetMeshes_Parms), Z_Construct_UFunction_UELCostume_GetMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_GetMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_GetMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_GetMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_GetMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_GetMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics
	{
		struct ELCostume_eventGetPartsMesh_Parms
		{
			EEditPartsSlot Slot;
			USkeletalMeshComponent* Out;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Out_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Out;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventGetPartsMesh_Parms, Slot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::NewProp_Slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::NewProp_Out_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventGetPartsMesh_Parms, Out), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::NewProp_Out_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::NewProp_Out_MetaData)) };
	void Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCostume_eventGetPartsMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCostume_eventGetPartsMesh_Parms), &Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::NewProp_Slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "GetPartsMesh", nullptr, nullptr, sizeof(ELCostume_eventGetPartsMesh_Parms), Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_GetPartsMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_GetPartsMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics
	{
		struct ELCostume_eventGetPartsMeshWithResult_Parms
		{
			EEditPartsSlot Slot;
			EBasicFindResult resultType;
			USkeletalMeshComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_resultType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_resultType;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventGetPartsMeshWithResult_Parms, Slot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::NewProp_Slot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::NewProp_resultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::NewProp_resultType = { "resultType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventGetPartsMeshWithResult_Parms, resultType), Z_Construct_UEnum_ELITE_Core_EBasicFindResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventGetPartsMeshWithResult_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::NewProp_Slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::NewProp_resultType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::NewProp_resultType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "GetPartsMeshWithResult", nullptr, nullptr, sizeof(ELCostume_eventGetPartsMeshWithResult_Parms), Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_IsEquippedParts_Statics
	{
		struct ELCostume_eventIsEquippedParts_Parms
		{
			FEditPartsCategoryName PartsCategoryName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsCategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartsCategoryName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_IsEquippedParts_Statics::NewProp_PartsCategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCostume_IsEquippedParts_Statics::NewProp_PartsCategoryName = { "PartsCategoryName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventIsEquippedParts_Parms, PartsCategoryName), Z_Construct_UScriptStruct_FEditPartsCategoryName, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_IsEquippedParts_Statics::NewProp_PartsCategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_IsEquippedParts_Statics::NewProp_PartsCategoryName_MetaData)) };
	void Z_Construct_UFunction_UELCostume_IsEquippedParts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCostume_eventIsEquippedParts_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCostume_IsEquippedParts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCostume_eventIsEquippedParts_Parms), &Z_Construct_UFunction_UELCostume_IsEquippedParts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_IsEquippedParts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_IsEquippedParts_Statics::NewProp_PartsCategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_IsEquippedParts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_IsEquippedParts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_IsEquippedParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "IsEquippedParts", nullptr, nullptr, sizeof(ELCostume_eventIsEquippedParts_Parms), Z_Construct_UFunction_UELCostume_IsEquippedParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_IsEquippedParts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_IsEquippedParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_IsEquippedParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_IsEquippedParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_IsEquippedParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_LoadAttireParam_Statics
	{
		struct ELCostume_eventLoadAttireParam_Parms
		{
			FAttireParam InParam;
			FAttireData Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InParam;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_LoadAttireParam_Statics::NewProp_InParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCostume_LoadAttireParam_Statics::NewProp_InParam = { "InParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventLoadAttireParam_Parms, InParam), Z_Construct_UScriptStruct_FAttireParam, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_LoadAttireParam_Statics::NewProp_InParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_LoadAttireParam_Statics::NewProp_InParam_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCostume_LoadAttireParam_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventLoadAttireParam_Parms, Out), Z_Construct_UScriptStruct_FAttireData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_LoadAttireParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_LoadAttireParam_Statics::NewProp_InParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_LoadAttireParam_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_LoadAttireParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_LoadAttireParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "LoadAttireParam", nullptr, nullptr, sizeof(ELCostume_eventLoadAttireParam_Parms), Z_Construct_UFunction_UELCostume_LoadAttireParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_LoadAttireParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_LoadAttireParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_LoadAttireParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_LoadAttireParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_LoadAttireParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_OnSetupAttire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttireData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttireData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_OnSetupAttire_Statics::NewProp_AttireData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCostume_OnSetupAttire_Statics::NewProp_AttireData = { "AttireData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventOnSetupAttire_Parms, AttireData), Z_Construct_UScriptStruct_FAttireData, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_OnSetupAttire_Statics::NewProp_AttireData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_OnSetupAttire_Statics::NewProp_AttireData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_OnSetupAttire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_OnSetupAttire_Statics::NewProp_AttireData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_OnSetupAttire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_OnSetupAttire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "OnSetupAttire", nullptr, nullptr, sizeof(ELCostume_eventOnSetupAttire_Parms), Z_Construct_UFunction_UELCostume_OnSetupAttire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_OnSetupAttire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_OnSetupAttire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_OnSetupAttire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_OnSetupAttire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_OnSetupAttire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_OnSetupPaint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditPaintData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditPaintData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_OnSetupPaint_Statics::NewProp_EditPaintData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCostume_OnSetupPaint_Statics::NewProp_EditPaintData = { "EditPaintData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventOnSetupPaint_Parms, EditPaintData), Z_Construct_UScriptStruct_FEditPaintData, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_OnSetupPaint_Statics::NewProp_EditPaintData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_OnSetupPaint_Statics::NewProp_EditPaintData_MetaData)) };
	void Z_Construct_UFunction_UELCostume_OnSetupPaint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCostume_eventOnSetupPaint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCostume_OnSetupPaint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCostume_eventOnSetupPaint_Parms), &Z_Construct_UFunction_UELCostume_OnSetupPaint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_OnSetupPaint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_OnSetupPaint_Statics::NewProp_EditPaintData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_OnSetupPaint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_OnSetupPaint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_OnSetupPaint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "OnSetupPaint", nullptr, nullptr, sizeof(ELCostume_eventOnSetupPaint_Parms), Z_Construct_UFunction_UELCostume_OnSetupPaint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_OnSetupPaint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_OnSetupPaint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_OnSetupPaint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_OnSetupPaint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_OnSetupPaint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_OnSetupParts_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditPartsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditPartsData;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventOnSetupParts_Parms, Slot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::NewProp_Slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::NewProp_EditPartsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::NewProp_EditPartsData = { "EditPartsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventOnSetupParts_Parms, EditPartsData), Z_Construct_UScriptStruct_FEditPartsData, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::NewProp_EditPartsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::NewProp_EditPartsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventOnSetupParts_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::NewProp_Slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::NewProp_EditPartsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "OnSetupParts", nullptr, nullptr, sizeof(ELCostume_eventOnSetupParts_Parms), Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_OnSetupParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_OnSetupParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventOnUpdateParts_Parms, Slot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_Slot_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventOnUpdateParts_Parms, NewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_InSocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventOnUpdateParts_Parms, InSocketName), METADATA_PARAMS(Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_InSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_InSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventOnUpdateParts_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_Slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_NewMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_InSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "OnUpdateParts", nullptr, nullptr, sizeof(ELCostume_eventOnUpdateParts_Parms), Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_OnUpdateParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_OnUpdateParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_RemovePartsMesh_Statics
	{
		struct ELCostume_eventRemovePartsMesh_Parms
		{
			EEditPartsSlot Slot;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCostume_RemovePartsMesh_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_RemovePartsMesh_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCostume_RemovePartsMesh_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventRemovePartsMesh_Parms, Slot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_RemovePartsMesh_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_RemovePartsMesh_Statics::NewProp_Slot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_RemovePartsMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_RemovePartsMesh_Statics::NewProp_Slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_RemovePartsMesh_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_RemovePartsMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_RemovePartsMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "RemovePartsMesh", nullptr, nullptr, sizeof(ELCostume_eventRemovePartsMesh_Parms), Z_Construct_UFunction_UELCostume_RemovePartsMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_RemovePartsMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_RemovePartsMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_RemovePartsMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_RemovePartsMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_RemovePartsMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_ResetMaterials_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_ResetMaterials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_ResetMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "ResetMaterials", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_ResetMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_ResetMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_ResetMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_ResetMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_SetAdjustSkinToneEnable_Statics
	{
		struct ELCostume_eventSetAdjustSkinToneEnable_Parms
		{
			bool bFlag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlag_MetaData[];
#endif
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetAdjustSkinToneEnable_Statics::NewProp_bFlag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELCostume_SetAdjustSkinToneEnable_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCostume_eventSetAdjustSkinToneEnable_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCostume_SetAdjustSkinToneEnable_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCostume_eventSetAdjustSkinToneEnable_Parms), &Z_Construct_UFunction_UELCostume_SetAdjustSkinToneEnable_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetAdjustSkinToneEnable_Statics::NewProp_bFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetAdjustSkinToneEnable_Statics::NewProp_bFlag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_SetAdjustSkinToneEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetAdjustSkinToneEnable_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetAdjustSkinToneEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_SetAdjustSkinToneEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "SetAdjustSkinToneEnable", nullptr, nullptr, sizeof(ELCostume_eventSetAdjustSkinToneEnable_Parms), Z_Construct_UFunction_UELCostume_SetAdjustSkinToneEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetAdjustSkinToneEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetAdjustSkinToneEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetAdjustSkinToneEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_SetAdjustSkinToneEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_SetAdjustSkinToneEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics
	{
		struct ELCostume_eventSetMaterialSectionVisibility_Parms
		{
			USkeletalMeshComponent* SkeletalMeshComponent;
			TSet<FName> MaterialSlotNames;
			bool bShow;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialSlotNames_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_MaterialSlotNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShow_MetaData[];
#endif
		static void NewProp_bShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventSetMaterialSectionVisibility_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_MaterialSlotNames_ElementProp = { "MaterialSlotNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_MaterialSlotNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_MaterialSlotNames = { "MaterialSlotNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventSetMaterialSectionVisibility_Parms, MaterialSlotNames), METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_MaterialSlotNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_MaterialSlotNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_bShow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((ELCostume_eventSetMaterialSectionVisibility_Parms*)Obj)->bShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCostume_eventSetMaterialSectionVisibility_Parms), &Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_bShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_bShow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_MaterialSlotNames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_MaterialSlotNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::NewProp_bShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "SetMaterialSectionVisibility", nullptr, nullptr, sizeof(ELCostume_eventSetMaterialSectionVisibility_Parms), Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics
	{
		struct ELCostume_eventSetScalarParameter_Parms
		{
			FName ParameterName;
			float NewValue;
			FName Specific;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Specific_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Specific;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventSetScalarParameter_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventSetScalarParameter_Parms, NewValue), METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::NewProp_NewValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::NewProp_Specific_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::NewProp_Specific = { "Specific", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventSetScalarParameter_Parms, Specific), METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::NewProp_Specific_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::NewProp_Specific_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::NewProp_Specific,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "SetScalarParameter", nullptr, nullptr, sizeof(ELCostume_eventSetScalarParameter_Parms), Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_SetScalarParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_SetScalarParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics
	{
		struct ELCostume_eventSetTextureParameter_Parms
		{
			FName ParameterName;
			UTexture* NewTexture;
			FName Specific;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Specific_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Specific;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventSetTextureParameter_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::NewProp_ParameterName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::NewProp_NewTexture = { "NewTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventSetTextureParameter_Parms, NewTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::NewProp_Specific_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::NewProp_Specific = { "Specific", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventSetTextureParameter_Parms, Specific), METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::NewProp_Specific_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::NewProp_Specific_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::NewProp_NewTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::NewProp_Specific,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "SetTextureParameter", nullptr, nullptr, sizeof(ELCostume_eventSetTextureParameter_Parms), Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_SetTextureParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_SetTextureParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_SetupCostume_Statics
	{
		struct ELCostume_eventSetupCostume_Parms
		{
			FAttireParam Base;
			FAttireParam Attire;
			FAttireParam Extra;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extra_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extra;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetupCostume_Statics::NewProp_Base_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCostume_SetupCostume_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventSetupCostume_Parms, Base), Z_Construct_UScriptStruct_FAttireParam, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetupCostume_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetupCostume_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetupCostume_Statics::NewProp_Attire_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCostume_SetupCostume_Statics::NewProp_Attire = { "Attire", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventSetupCostume_Parms, Attire), Z_Construct_UScriptStruct_FAttireParam, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetupCostume_Statics::NewProp_Attire_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetupCostume_Statics::NewProp_Attire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetupCostume_Statics::NewProp_Extra_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCostume_SetupCostume_Statics::NewProp_Extra = { "Extra", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventSetupCostume_Parms, Extra), Z_Construct_UScriptStruct_FAttireParam, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetupCostume_Statics::NewProp_Extra_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetupCostume_Statics::NewProp_Extra_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_SetupCostume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetupCostume_Statics::NewProp_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetupCostume_Statics::NewProp_Attire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetupCostume_Statics::NewProp_Extra,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetupCostume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_SetupCostume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "SetupCostume", nullptr, nullptr, sizeof(ELCostume_eventSetupCostume_Parms), Z_Construct_UFunction_UELCostume_SetupCostume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetupCostume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetupCostume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetupCostume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_SetupCostume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_SetupCostume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics
	{
		struct ELCostume_eventSetupPartsMeshComponent_Parms
		{
			USkeletalMeshComponent* Parent;
			USkeletalMeshComponent* Child;
			FName CollisionProfileName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Child;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventSetupPartsMeshComponent_Parms, Parent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::NewProp_Child_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventSetupPartsMeshComponent_Parms, Child), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::NewProp_Child_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::NewProp_Child_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::NewProp_CollisionProfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventSetupPartsMeshComponent_Parms, CollisionProfileName), METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::NewProp_CollisionProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::NewProp_CollisionProfileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::NewProp_Child,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::NewProp_CollisionProfileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "SetupPartsMeshComponent", nullptr, nullptr, sizeof(ELCostume_eventSetupPartsMeshComponent_Parms), Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics
	{
		struct ELCostume_eventSetVectorParameter_Parms
		{
			FName ParameterName;
			FVector NewValue;
			FName Specific;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Specific_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Specific;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventSetVectorParameter_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventSetVectorParameter_Parms, NewValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::NewProp_NewValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::NewProp_Specific_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::NewProp_Specific = { "Specific", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventSetVectorParameter_Parms, Specific), METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::NewProp_Specific_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::NewProp_Specific_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::NewProp_Specific,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "SetVectorParameter", nullptr, nullptr, sizeof(ELCostume_eventSetVectorParameter_Parms), Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_SetVectorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_SetVectorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_UnbindDynamicMaterials_Statics
	{
		struct ELCostume_eventUnbindDynamicMaterials_Parms
		{
			USkeletalMeshComponent* SkeletalMeshComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_UnbindDynamicMaterials_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCostume_UnbindDynamicMaterials_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventUnbindDynamicMaterials_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_UnbindDynamicMaterials_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_UnbindDynamicMaterials_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_UnbindDynamicMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_UnbindDynamicMaterials_Statics::NewProp_SkeletalMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_UnbindDynamicMaterials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_UnbindDynamicMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "UnbindDynamicMaterials", nullptr, nullptr, sizeof(ELCostume_eventUnbindDynamicMaterials_Parms), Z_Construct_UFunction_UELCostume_UnbindDynamicMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_UnbindDynamicMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_UnbindDynamicMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_UnbindDynamicMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_UnbindDynamicMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_UnbindDynamicMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics
	{
		struct ELCostume_eventUpdateEyeColorParameter_Parms
		{
			float Hue;
			float Luminous;
			float Desaturation;
			bool bLeft;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Luminous_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Luminous;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desaturation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Desaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeft_MetaData[];
#endif
		static void NewProp_bLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_Hue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_Hue = { "Hue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventUpdateEyeColorParameter_Parms, Hue), METADATA_PARAMS(Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_Hue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_Hue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_Luminous_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_Luminous = { "Luminous", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventUpdateEyeColorParameter_Parms, Luminous), METADATA_PARAMS(Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_Luminous_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_Luminous_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_Desaturation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_Desaturation = { "Desaturation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventUpdateEyeColorParameter_Parms, Desaturation), METADATA_PARAMS(Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_Desaturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_Desaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_bLeft_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_bLeft_SetBit(void* Obj)
	{
		((ELCostume_eventUpdateEyeColorParameter_Parms*)Obj)->bLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_bLeft = { "bLeft", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCostume_eventUpdateEyeColorParameter_Parms), &Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_bLeft_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_bLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_bLeft_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_Hue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_Luminous,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_Desaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::NewProp_bLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "UpdateEyeColorParameter", nullptr, nullptr, sizeof(ELCostume_eventUpdateEyeColorParameter_Parms), Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCostume_UpdateEyeHighlightParameter_Statics
	{
		struct ELCostume_eventUpdateEyeHighlightParameter_Parms
		{
			float HighlightLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighlightLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCostume_UpdateEyeHighlightParameter_Statics::NewProp_HighlightLevel = { "HighlightLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCostume_eventUpdateEyeHighlightParameter_Parms, HighlightLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCostume_UpdateEyeHighlightParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCostume_UpdateEyeHighlightParameter_Statics::NewProp_HighlightLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCostume_UpdateEyeHighlightParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCostume_UpdateEyeHighlightParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCostume, nullptr, "UpdateEyeHighlightParameter", nullptr, nullptr, sizeof(ELCostume_eventUpdateEyeHighlightParameter_Parms), Z_Construct_UFunction_UELCostume_UpdateEyeHighlightParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_UpdateEyeHighlightParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCostume_UpdateEyeHighlightParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCostume_UpdateEyeHighlightParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCostume_UpdateEyeHighlightParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCostume_UpdateEyeHighlightParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCostume_NoRegister()
	{
		return UELCostume::StaticClass();
	}
	struct Z_Construct_UClass_UELCostume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraMeshes_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExtraMeshes_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExtraMeshes_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExtraMeshes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ExtraMeshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquippedPartsCategorySet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedPartsCategorySet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_EquippedPartsCategorySet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterials_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DynamicMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DynamicMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskMaterial;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ForceHiddenMaterialSlotNames_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceHiddenMaterialSlotNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ForceHiddenMaterialSlotNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanSkinTone_MetaData[];
#endif
		static void NewProp_bCanSkinTone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanSkinTone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultEyeHighlightLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultEyeHighlightLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCostume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCharacterComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCostume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCostume_AddPartsAsset, "AddPartsAsset" }, // 1779570779
		{ &Z_Construct_UFunction_UELCostume_AddPartsMesh, "AddPartsMesh" }, // 4272388408
		{ &Z_Construct_UFunction_UELCostume_BindDynamicMaterial, "BindDynamicMaterial" }, // 3153440969
		{ &Z_Construct_UFunction_UELCostume_BindDynamicMaterials, "BindDynamicMaterials" }, // 258403752
		{ &Z_Construct_UFunction_UELCostume_GetEyeMaterialInstanceDynamic, "GetEyeMaterialInstanceDynamic" }, // 1018214152
		{ &Z_Construct_UFunction_UELCostume_GetMaterialInstanceDynamic, "GetMaterialInstanceDynamic" }, // 903079391
		{ &Z_Construct_UFunction_UELCostume_GetMeshes, "GetMeshes" }, // 2366248055
		{ &Z_Construct_UFunction_UELCostume_GetPartsMesh, "GetPartsMesh" }, // 3828713291
		{ &Z_Construct_UFunction_UELCostume_GetPartsMeshWithResult, "GetPartsMeshWithResult" }, // 1199758046
		{ &Z_Construct_UFunction_UELCostume_IsEquippedParts, "IsEquippedParts" }, // 3804888529
		{ &Z_Construct_UFunction_UELCostume_LoadAttireParam, "LoadAttireParam" }, // 3151213307
		{ &Z_Construct_UFunction_UELCostume_OnSetupAttire, "OnSetupAttire" }, // 803524561
		{ &Z_Construct_UFunction_UELCostume_OnSetupPaint, "OnSetupPaint" }, // 3458362337
		{ &Z_Construct_UFunction_UELCostume_OnSetupParts, "OnSetupParts" }, // 3881316735
		{ &Z_Construct_UFunction_UELCostume_OnUpdateParts, "OnUpdateParts" }, // 590130100
		{ &Z_Construct_UFunction_UELCostume_RemovePartsMesh, "RemovePartsMesh" }, // 1817754861
		{ &Z_Construct_UFunction_UELCostume_Reset, "Reset" }, // 2906307010
		{ &Z_Construct_UFunction_UELCostume_ResetMaterials, "ResetMaterials" }, // 360589601
		{ &Z_Construct_UFunction_UELCostume_SetAdjustSkinToneEnable, "SetAdjustSkinToneEnable" }, // 3264056928
		{ &Z_Construct_UFunction_UELCostume_SetMaterialSectionVisibility, "SetMaterialSectionVisibility" }, // 3072737078
		{ &Z_Construct_UFunction_UELCostume_SetScalarParameter, "SetScalarParameter" }, // 4192384002
		{ &Z_Construct_UFunction_UELCostume_SetTextureParameter, "SetTextureParameter" }, // 2882637040
		{ &Z_Construct_UFunction_UELCostume_SetupCostume, "SetupCostume" }, // 828299368
		{ &Z_Construct_UFunction_UELCostume_SetupPartsMeshComponent, "SetupPartsMeshComponent" }, // 1396919218
		{ &Z_Construct_UFunction_UELCostume_SetVectorParameter, "SetVectorParameter" }, // 3182982565
		{ &Z_Construct_UFunction_UELCostume_UnbindDynamicMaterials, "UnbindDynamicMaterials" }, // 3089959045
		{ &Z_Construct_UFunction_UELCostume_UpdateEyeColorParameter, "UpdateEyeColorParameter" }, // 1808959067
		{ &Z_Construct_UFunction_UELCostume_UpdateEyeHighlightParameter, "UpdateEyeHighlightParameter" }, // 1075279910
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCostume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELCostume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCostume_Statics::NewProp_ExtraMeshes_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCostume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCostume_Statics::NewProp_ExtraMeshes_ValueProp = { "ExtraMeshes", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCostume_Statics::NewProp_ExtraMeshes_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCostume_Statics::NewProp_ExtraMeshes_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCostume_Statics::NewProp_ExtraMeshes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELCostume_Statics::NewProp_ExtraMeshes_Key_KeyProp = { "ExtraMeshes_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCostume_Statics::NewProp_ExtraMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCostume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELCostume_Statics::NewProp_ExtraMeshes = { "ExtraMeshes", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCostume, ExtraMeshes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCostume_Statics::NewProp_ExtraMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCostume_Statics::NewProp_ExtraMeshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCostume_Statics::NewProp_EquippedPartsCategorySet_ElementProp = { "EquippedPartsCategorySet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditPartsCategoryName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCostume_Statics::NewProp_EquippedPartsCategorySet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCostume" },
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UELCostume_Statics::NewProp_EquippedPartsCategorySet = { "EquippedPartsCategorySet", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCostume, EquippedPartsCategorySet), METADATA_PARAMS(Z_Construct_UClass_UELCostume_Statics::NewProp_EquippedPartsCategorySet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCostume_Statics::NewProp_EquippedPartsCategorySet_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCostume_Statics::NewProp_DynamicMaterials_ValueProp = { "DynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELCostume_Statics::NewProp_DynamicMaterials_Key_KeyProp = { "DynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCostume_Statics::NewProp_DynamicMaterials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCostume" },
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELCostume_Statics::NewProp_DynamicMaterials = { "DynamicMaterials", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCostume, DynamicMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCostume_Statics::NewProp_DynamicMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCostume_Statics::NewProp_DynamicMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCostume_Statics::NewProp_MaskMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCostume" },
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCostume_Statics::NewProp_MaskMaterial = { "MaskMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCostume, MaskMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCostume_Statics::NewProp_MaskMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCostume_Statics::NewProp_MaskMaterial_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELCostume_Statics::NewProp_ForceHiddenMaterialSlotNames_ElementProp = { "ForceHiddenMaterialSlotNames", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCostume_Statics::NewProp_ForceHiddenMaterialSlotNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCostume" },
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UELCostume_Statics::NewProp_ForceHiddenMaterialSlotNames = { "ForceHiddenMaterialSlotNames", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCostume, ForceHiddenMaterialSlotNames), METADATA_PARAMS(Z_Construct_UClass_UELCostume_Statics::NewProp_ForceHiddenMaterialSlotNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCostume_Statics::NewProp_ForceHiddenMaterialSlotNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCostume_Statics::NewProp_bCanSkinTone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCostume" },
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	void Z_Construct_UClass_UELCostume_Statics::NewProp_bCanSkinTone_SetBit(void* Obj)
	{
		((UELCostume*)Obj)->bCanSkinTone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELCostume_Statics::NewProp_bCanSkinTone = { "bCanSkinTone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELCostume), &Z_Construct_UClass_UELCostume_Statics::NewProp_bCanSkinTone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELCostume_Statics::NewProp_bCanSkinTone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCostume_Statics::NewProp_bCanSkinTone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCostume_Statics::NewProp_DefaultEyeHighlightLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCostume" },
		{ "ModuleRelativePath", "Public/ELCostume.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELCostume_Statics::NewProp_DefaultEyeHighlightLevel = { "DefaultEyeHighlightLevel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCostume, DefaultEyeHighlightLevel), METADATA_PARAMS(Z_Construct_UClass_UELCostume_Statics::NewProp_DefaultEyeHighlightLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCostume_Statics::NewProp_DefaultEyeHighlightLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELCostume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCostume_Statics::NewProp_ExtraMeshes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCostume_Statics::NewProp_ExtraMeshes_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCostume_Statics::NewProp_ExtraMeshes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCostume_Statics::NewProp_ExtraMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCostume_Statics::NewProp_EquippedPartsCategorySet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCostume_Statics::NewProp_EquippedPartsCategorySet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCostume_Statics::NewProp_DynamicMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCostume_Statics::NewProp_DynamicMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCostume_Statics::NewProp_DynamicMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCostume_Statics::NewProp_MaskMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCostume_Statics::NewProp_ForceHiddenMaterialSlotNames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCostume_Statics::NewProp_ForceHiddenMaterialSlotNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCostume_Statics::NewProp_bCanSkinTone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCostume_Statics::NewProp_DefaultEyeHighlightLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCostume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCostume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCostume_Statics::ClassParams = {
		&UELCostume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELCostume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELCostume_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELCostume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCostume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCostume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCostume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCostume, 2860649069);
	template<> CREATION_API UClass* StaticClass<UELCostume>()
	{
		return UELCostume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCostume(Z_Construct_UClass_UELCostume, &UELCostume::StaticClass, TEXT("/Script/Creation"), TEXT("UELCostume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCostume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
